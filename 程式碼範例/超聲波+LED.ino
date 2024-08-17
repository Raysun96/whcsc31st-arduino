int trigPin = 3;    // 超音波感測器 Trig腳接 Arduino pin 11
int echoPin = 4;    //超音波感測器 Echo 腳接 Arduino pin 12
int LED = 2;
int cm,duration;


void Detection(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;  
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(LED, OUTPUT);   

}

void loop() {
  // put your main code here, to run repeatedly:
  Detection();
  if ( cm < 10 ) {
    digitalWrite(LED,HIGH);
  }
  else {
    digitalWrite(LED,LOW);
  }
}


