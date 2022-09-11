int REDpin = 4;
int YELLOWpin = 5;
int GREENpin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(REDpin, OUTPUT);
  pinMode(GREENpin, OUTPUT);
  pinMode(YELLOWpin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(REDpin, HIGH);
  delay(5000);
  digitalWrite(REDpin, LOW);
  digitalWrite(YELLOWpin, HIGH);
  delay(5000);
  digitalWrite(YELLOWpin, LOW);
  digitalWrite(GREENpin, HIGH);
  delay(5000);
  digitalWrite(GREENpin, LOW);
}
