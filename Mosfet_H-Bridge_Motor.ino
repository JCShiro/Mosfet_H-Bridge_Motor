int P1 = 3;
int P2 = 5;
int N1 = 6;
int N2 = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  digitalWrite(P1, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(P2, HIGH);
  digitalWrite(N1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  State_1();
  delay(1000);
  State_2();
  delay(1000);
  State_Off();
  delay(1000);
}

void State_1(){
  //Turn off motor direction 2
  digitalWrite(P2, HIGH);
  // delay(100);
  digitalWrite(N1,LOW);
  delay(100);
  //Turn on motor direction 1
  digitalWrite(P1, LOW);
  // delay(100);
  digitalWrite(N2, HIGH);
  delay(100);
}

void State_2(){
  //Turn off motor direction 1
  digitalWrite(P1, HIGH);
  // delay(100);
  digitalWrite(N2, LOW);
  delay(100);
  //Turn on motor direction 2
  digitalWrite(P2, LOW);
  // delay(100);
  digitalWrite(N1, HIGH);
  delay(100);
}

void State_Off(){
  digitalWrite(P1, HIGH);
  // delay(100);
  digitalWrite(N2,LOW);
  // delay(100);
  digitalWrite(P2,HIGH);
  // delay(100);
  digitalWrite(N1,LOW);
  // delay(100);
}