#include "LineFollower.h"

LineFollower robot;

void setup()
{
  Serial.begin(9600);
  robot.robotSetup();
  Serial.println("GO FRITZEN I/O ROBOT!");
}

void loop() 
{ 
  robot.robotLoop();
}
