#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int trigPin = 11;  
int echoPin = 12;   
float duration, cm ; 

// LCD I2C位址，默認為0x27或0x3F，依據背板的晶片不同而有差異，16、2為LCD顯示器大小。
LiquidCrystal_I2C lcd(32, 16, 2); 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 

  // 初始化LCD
  lcd.init();
  lcd.backlight();
}
void loop() {
  int sensorValue = analogRead(A0);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1; 
  // 在LCD上顯示cm
  lcd.setCursor(0, 0); // (colum, row)
  lcd.print("HC-SR04:");
  lcd.print(cm); 
  lcd.setCursor(0, 1); // (colum,row)從第二排第三格位置開始顯示
  lcd.print("resistor:");
  lcd.print(sensorValue);
}


