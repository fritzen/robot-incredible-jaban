 /* ---------------------------------------------------------------------------------------
 * Autor / Author: Eduardo Fritzen - eduardo@fritzen.io
 * Não é permitido o uso para fins comerciais deste código sem a autorização por escrito do autor
 * Use of this code for commercial purposes is not permitted without written authorization from the author
 * ---------------------------------------------------------------------------------------
 */
#include "FioMotorDriver.h"

#include <Arduino.h>

FioMotorDriver::FioMotorDriver()
{

}

void FioMotorDriver::attach()
{          
  attachServoMotor(DEFAULT_SERVO_MOTOR_A_PIN, DEFAULT_SERVO_MOTOR_B_PIN);
}


void FioMotorDriver::attachServoMotor(uint8_t pinServo1, uint8_t pinServo2)
{
    _pinServoA = pinServo1;
    _pinServoB = pinServo2;    

    _servoA.detach();
    _servoB.detach();
    pinMode(_pinServoA, OUTPUT);
    pinMode(_pinServoB, OUTPUT);  
    
    _servoA.attach(_pinServoA);
    _servoB.attach(_pinServoB);
}





void FioMotorDriver::test(){
      int pos = 0; 
            for (pos = 0; pos <= 180; pos += 1) {
          _servoA.write(pos);
         _servoB.write(pos);
          delay(15);
        }
        for (pos = 180; pos >= 0; pos -= 1) {
          _servoA.write(pos);
         _servoB.write(pos);
          delay(15);
        }
}
void FioMotorDriver::forward(uint16_t pwm)
{

    _servoA.write(SERVO_MIN);
    _servoB.write(SERVO_MAX);      

}
void FioMotorDriver::backward(uint16_t pwm)
{

    _servoA.write(SERVO_MAX);
    _servoB.write(SERVO_MIN);

}

void FioMotorDriver::turnRight(uint16_t pwm)
{

    _servoA.write(SERVO_MIN);
    _servoB.write(SERVO_STOP);

}

void FioMotorDriver::turnLeft(uint16_t pwm)
{
    _servoA.write(SERVO_STOP);
    _servoB.write(SERVO_MAX);
}

void FioMotorDriver::turnRightAxis(uint16_t pwm) 
{ 
    _servoA.write(SERVO_MAX);
    _servoB.write(SERVO_MAX);
}

void FioMotorDriver::turnLeftAxis(uint16_t pwm) 
{ 
    _servoA.write(SERVO_MIN);
    _servoB.write(SERVO_MIN);
}

void FioMotorDriver::stop()
{
    _servoA.write(SERVO_STOP);
    _servoB.write(SERVO_STOP);
}

void FioMotorDriver::forward()
{
  forward(DEFAULT_SPEED);
}

void FioMotorDriver::backward()
{
  backward(DEFAULT_SPEED);
}

void FioMotorDriver::turnRight()
{
  turnRight(DEFAULT_SPEED);
}

void FioMotorDriver::turnLeft()
{
  turnLeft(DEFAULT_SPEED);
}

void FioMotorDriver::turnRightAxis()
{
  turnRightAxis(DEFAULT_SPEED);
}

void FioMotorDriver::turnLeftAxis()
{
  turnLeftAxis(DEFAULT_SPEED);
}
