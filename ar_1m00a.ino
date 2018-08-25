/*
 * base sketch writed by Nicu FLORICA (niq_ro), 19.08.2018, Craiova
 * for Adrian Roman
 */

#define bec1 4    // light 1
#define bec2 5    // light 2
#define bec3 6    // light 3
#define buton1 2  // on-off button
#define buton2 3  // emergency button

//int timp1 = 110;  // time seconds fon light on //
//int timp2 = 10;  // time in seconds for flash

int timp1 = 5;  // time seconds fon light on // for test
int timp2 = 3;  // time in seconds for flash
byte mod = 1;      // 1 = normal, 2 = off, 3 = emergency

void setup() {
Serial.begin(9600);    // activate serial monitor at 9600bps
pinMode(bec1, OUTPUT); // pin is define as output 
pinMode(bec2, OUTPUT); // pin is define as output 
pinMode(bec3, OUTPUT); // pin is define as output 
pinMode(buton1, INPUT); // pin is define as input
pinMode(buton2, INPUT); // pin is define as input

digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
digitalWrite(buton1,HIGH);  // pin in 1 (pull-up)
digitalWrite(buton2,HIGH);  // pin in 1 (pull-up)

timp1 = 10*timp1;
}

void loop() {

if (mod == 1)
{
  for (int i=0; i<=timp1; i++){
digitalWrite(bec1, HIGH);  // pin in 1
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
    delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
    delay(500);
  }
  delay(100);
  }
}  // end normal mode with permannet ON for first light

if (mod == 1)
{
  for (int i=0; i<=timp2; i++){
digitalWrite(bec1, HIGH);  // pin in 1
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
    delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
    delay(500);
  }
  delay(500);
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp2;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp2;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(500); 
  }
}  // end normal mode with flash for first light

if (mod == 1)
{
  for (int i=0; i<=timp1; i++){
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, HIGH);  // pin in 1
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(100);
  }
}  // end normal mode with permannet ON for second light

if (mod == 1)
{
  for (int i=0; i<=timp2; i++){
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, HIGH);  // pin in 1
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(500);
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp2;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp2;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(500); 
  }
}  // end normal mode with flash for second light

if (mod == 1)
{
  for (int i=0; i<=timp1; i++){
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, HIGH);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(100);
  }
}  // end normal mode with permannet ON for 3rd light

if (mod == 1)
{
  for (int i=0; i<=timp2; i++){
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, HIGH);  // pin in 1
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp1;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp1;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(500);
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    i = timp2;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
    i = timp2;
    Serial.println("emergency button is activated, will enter in EMERGENCY mode !");
        delay(500);
  }
  delay(500); 
  }
}  // end normal mode with flash for 3rd light


if (mod == 2)
{
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 1;
    Serial.println("push button is activated, will enter in ON mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 3;
        delay(500);
  }
  delay(100); 
}  // end off mode


if (mod == 3)
{
digitalWrite(bec1, HIGH);  // pin in 1
digitalWrite(bec2, HIGH);  // pin in 1
digitalWrite(bec3, HIGH);  // pin in 1
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 2;
    Serial.println("emergency button is activated, will enter in OFF mode !");
        delay(500);
  }
  delay(500);
digitalWrite(bec1, LOW);  // pin in 0
digitalWrite(bec2, LOW);  // pin in 0
digitalWrite(bec3, LOW);  // pin in 0
 if (digitalRead(buton1) == LOW)
  {
    mod = 2;
    Serial.println("push button is activated, will enter in OFF mode !");
        delay(500);
  }
 if (digitalRead(buton2) == LOW)
  {
    mod = 2;
    Serial.println("emergency button is activated, will enter in OFF mode !");
        delay(500);
  }
  delay(500); 

}  // end emergency mode


} // end main loop
