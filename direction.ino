int in1 = 9; //Declaring the pins where in1 in2 from the driver are wired
int in2 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in2, OUTPUT);

}
void TurnMotorAclk()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
void TurnMotorAanticlk()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
}

void TurnOFFA()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
  TurnMotorAclk(); //in the loop we use the function to turn the motor for 3s and stop it for 2s
  delay(3000);
  TurnOFFA();
  delay(2000);
  TurnMotorAanticlk();
  delay(3000);
  TurnOFFA();
  delay(2000);

}
