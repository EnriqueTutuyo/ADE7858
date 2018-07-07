#include "ADE7758.h"
#include <SPI.h>

ADE7858 myADE(10);

void setup(){
  Serial.begin(9600);
  myADE.begin();
}

void loop(){

}
