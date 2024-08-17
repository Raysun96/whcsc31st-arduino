int trigPin = A4;    // 超音波感測器 Trig腳接 Arduino pin 11
int echoPin = A5;    //超音波感測器 Echo 腳接 Arduino pin 12
int cm,duration,cm0,cm10;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, 0);  // 關閉小數點
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin (9600);
}

void print0(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);  
}

void print1(){
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
}

void print10(){
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  digitalWrite(A0, 0);
  digitalWrite(A1, 0);
  digitalWrite(A2, 0);
}


void print20(){
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  digitalWrite(A0, 1);
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
}


void print2(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}

void print3(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}


void print30(){
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  digitalWrite(A0, 0);
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
}

void print4(){
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}


void print40(){
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  digitalWrite(A0, 0);
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}

void print5(){
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}


void print50(){
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  digitalWrite(A0, 0);
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}

void print6(){
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}


void print60(){
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  digitalWrite(A0, 1);
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}

void print7(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
}


void print70(){
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  digitalWrite(A0, 0);
  digitalWrite(A2, 0);
  digitalWrite(A3, 0);
}

void print8(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}


void print80(){
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  digitalWrite(A0, 1);
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}

void print9(){
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}


void print90(){
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  digitalWrite(A0, 0);
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}

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



void loop() {
  // put your main code here, to run repeatedly:
  Detection();
  Serial.print(cm);
  Serial.print(" ");
  cm10 = cm / 10 ;
  cm0 = cm % 10 ;
  Serial.print(cm10);
  Serial.print(" ");
  Serial.print(cm0);
  Serial.print("\n");



  if (cm10 = 1) {
    print10();
  }
  if (cm10 = 2) {
    print20();
  }
  if (cm10 = 3) {
    print30();
  }
  if (cm10 = 4) {
    print10();
  }
  if (cm10 = 5) {
    print50();
  }
  if (cm10 = 6) {
    print60();
  }
  if (cm10 = 7) {
    print70();
  }
  if (cm10 = 8) {
    print80();
  }
  if (cm10 = 9) {
    print90();
  }
  if (cm0 = 1) {
    print1();
  }
  if (cm0 = 2) {
    print2();
  }
  if (cm0 = 3) {
    print3();
  }
  if (cm0 = 4) {
    print4();
  }
  if (cm0 = 5) {
    print5();
  }
  if (cm0 = 6) {
    print6();
  }
  if (cm0 = 7) {
    print7();
  }
  if (cm0 = 8) {
    print8();
  }
  if (cm0 = 9) {
    print9();
  }
  if (cm0 = 0) {
    print0();
  }
}
