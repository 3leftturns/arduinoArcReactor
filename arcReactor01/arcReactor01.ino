//Initalize variables
int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 3;
int led5 = 5;
int led6 = 6;
//set delay for high and low LED pins
int ledDelayH = 25;
int ledDelayL = 0;
//set variable resistor pin
int res1 = 0;

void setup() {
  //Set all LED pins as output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT); 
  pinMode(res1, INPUT); 
}

void loop() {
//set led pins high & low, produces spinning effect
  digitalWrite(led1, HIGH);
  delay(ledDelayH);
  digitalWrite(led1, LOW);
  delay(ledDelayL);

  digitalWrite(led2, HIGH);
  delay(ledDelayH);
  digitalWrite(led2, LOW);
  delay(ledDelayL);  

  digitalWrite(led3, HIGH);
  delay(ledDelayH);
  digitalWrite(led3, LOW);
  delay(ledDelayL);

  digitalWrite(led4, HIGH);
  delay(ledDelayH);
  digitalWrite(led4, LOW);
  delay(ledDelayL);

  digitalWrite(led5, HIGH);
  delay(ledDelayH);
  digitalWrite(led5, LOW);
  delay(ledDelayL);

  digitalWrite(led6, HIGH);
  delay(ledDelayH);
  digitalWrite(led6, LOW);
  delay(ledDelayL);

}
