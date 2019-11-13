/*
  Conditionals - If statement

  This example demonstrates the use of if() statements.
  It reads the state of a potentiometer (an analog input) and turns on an LED.

  The circuit:
  - potentiometer
    Center pin of the potentiometer goes to analog pin 0.
    Side pins of the potentiometer go to +5V and ground.
  - LED connected from digital pin 13 to ground

  - Note: On most Arduino boards, there is already an LED on the board connected
    to pin 13, so you don't need any extra components for this example.

https://www.engineersgarage.com/arduino/fading-led-with-potentiometer-using-arduino/
  modified 11 Nov 2019
  by Ryan Moore
*/

int sensor=A0;  //Analog 0 pin named as sensor
int output=D7;   //Pin-7 is declared as output

void setup()                                                          
{
pinMode(output, OUTPUT); //Pin-7 is declared as output 
//We dont need to declare the A0 pin as input since it is predefined as input                                                
}

void loop()
{ 
int reading=analogRead(sensor); //Reading the voltage out by potentiometer
int bright=reading/4;           //Dividing reading by 4 to bring it in range of 0 - 255                               
//delay(500);                     //Delay is not necessary you can remove it
analogWrite(output, bright);    //Finally outputting the read value on pin-9 fading led
}  
