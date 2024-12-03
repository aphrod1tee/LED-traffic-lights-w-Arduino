#define red 8 //the red LED
#define yellow 7 //the yellow LED
#define green 13 //the green LED

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);  //the "pinMode" code helps the code 2 decide if the pin is an output or an input
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(7000);
digitalWrite(red,LOW);
digitalWrite(yellow,HIGH);
delay(3000);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(4000);
digitalWrite(green,LOW);
}
