#include<iostream>
#include<unistd.h> //for usleep
#include"GPIO.h"
#include"derek_LED.h"
using namespace exploringBB;
using namespace std;

int main(){
   GPIO outGPIO(49), butAGPIO(26), butBGPIO(46);
   LED led = LED(3);
   int butA, butB;
   butAGPIO.setDirection(INPUT);
   butBGPIO.setDirection(INPUT);
   butA = butAGPIO.getValue();
   butB = butBGPIO.getValue();
   if (butA==0)//if button A is pressed
   {
      outGPIO.setDirection(OUTPUT);
      outGPIO.setValue(HIGH);
      led.turnOff();
   }
   else if (butB==0)//if button B is pressed
   {
      outGPIO.setDirection(OUTPUT);
      outGPIO.setValue(LOW);
      led.turnOn();
   }
   else // if neither is pressed
   {
     outGPIO.setDirection(OUTPUT);
     outGPIO.setValue(LOW);
     led.turnOff();
   }
   return 0;
}
