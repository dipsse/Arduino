int led = 13;

//전원 들어올때 한번만 실행됨
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //13번 핀을 출력으로 함
}

//반복 작업
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);  //13번 핀에 5V 인가함(HIGH)
  delay(1000);              //1초간(1000ms) 상태를 유지흠
  digitalWrite(led, LOW);   //13번 핀에 0V 인가함(LOW)
  delay(1000);              //1초간(1000ms) 상태를 유지흠
}
