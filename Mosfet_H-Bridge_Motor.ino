//P type mosfet 1
int P1 = 11;
//P type mosfet 2
int P2 = 9;
//N type mosfet 1
int N1 = 10;
// N type mosfet 2
int N2 = 6;

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
  delay(2000);
  State_2();
  delay(2000);
  State_Off();
  delay(2000);
}

void State_1(){
  //Turn off motor direction 2
  Serial.println("State 2 off");
  digitalWrite(P2, HIGH);
  // delay(100);
  digitalWrite(N1,LOW);
  delay(100);
  //Turn on motor direction 1
  Serial.println("State 1 on");
  digitalWrite(P1, LOW);
  // delay(100);
  digitalWrite(N2, HIGH);
  delay(100);
}

void State_2(){
  //Turn off motor direction 1
  Serial.println("State 1 off");
  digitalWrite(P1, HIGH);
  // delay(100);
  digitalWrite(N2, LOW);
  delay(100);
  //Turn on motor direction 2
  Serial.println("State 2 on");
  digitalWrite(P2, LOW);
  // delay(100);
  digitalWrite(N1, HIGH);
  delay(100);
}

void State_Off(){
  Serial.println("State off");
  digitalWrite(P1, HIGH);
  // delay(100);
  digitalWrite(N2,LOW);
  // delay(100);
  digitalWrite(P2,HIGH);
  // delay(100);
  digitalWrite(N1,LOW);
  // delay(100);
}