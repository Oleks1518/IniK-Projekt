const int pin = 2; //Variable pin bei Anschluss 2
const int pin2 = 6; //Variable pin2 bei Anschluss 6

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT); //pin ist output
  pinMode(pin2, OUTPUT); //pin2 ist output


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH); //LED wird angeschaltet
  delay(700); //1000ms warten
  digitalWrite(pin2,HIGH); //LED wird angeschaltet
  delay(500);
  digitalWrite(pin,LOW); //LED wird ausgeschaltet


  digitalWrite(pin2,HIGH); //LED wird angeschaltet
  delay(1000); //1000ms warten
  digitalWrite(pin,HIGH); //LED wird ausgeschaltet
  delay(1500); //1000ms warten
  digitalWrite(pin,LOW); //LED wird angeschaltet

  delay(800); //1000ms warten
  digitalWrite(pin2,LOW); //LED wird ausgeschaltet
  delay(1000); //1000ms warten

  digitalWrite(pin,HIGH); //LED wird angeschaltet
  delay(200); //1000ms warten
  digitalWrite(pin2,HIGH); //LED wird angeschaltet
  delay(400);
  digitalWrite(pin,LOW); //LED wird ausgeschaltet


  digitalWrite(pin2,HIGH); //LED wird angeschaltet
  delay(100); //1000ms warten
  digitalWrite(pin,HIGH); //LED wird ausgeschaltet
  delay(150); //1000ms warten
  digitalWrite(pin,LOW); //LED wird angeschaltet

  delay(200); //1000ms warten
  digitalWrite(pin2,LOW); //LED wird ausgeschaltet
  delay(200); //1000ms warten





}
