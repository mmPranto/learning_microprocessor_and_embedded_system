int in1 = 8; //Declaring the pins where in1 in2 from the driver are wired
int in2 = 9; //here they are wired with D9 and D8 from Arduino
int ConA = 10; 



void setup() {
  // put your setup code here, to run once:
  pinMode(int1, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(int2, OUTPUT);
  pinMode(ConA , OUTPUT);

}

void TurnMotorA(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW); 
  
}
void TurnOFFA(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(ConA,0);
}

void loop() {
  for(int i=0;i<=255;i++)
  {
    TurnMotorA();
    analogWrite(ConA,i);
    delay(20);
  }
  TurnOFFA();
  delay(2000);
  

  


}
