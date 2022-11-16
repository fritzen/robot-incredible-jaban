 /* ---------------------------------------------------------------------------------------
 * Autor / Author: Eduardo Fritzen eduardo@fritzen.io
 * Não é permitida o uso para fins comerciais deste código sem a autrorização por escrito do autor
 * Use of this code for commercial purposes is not permitted without written authorization from the author
 * ---------------------------------------------------------------------------------------
 */
#ifndef FioMotorDriver_h
#define FioMotorDriver_h
 
#include <Arduino.h>
#include <stdio.h>
#include <inttypes.h>

#include <Servo.h>

#define DEFAULT_SPEED 120
#define SERVO_STOP 90
#define SERVO_MAX 120
#define SERVO_MIN 60

// Servo
#define DEFAULT_SERVO_MOTOR_A_PIN 6
#define DEFAULT_SERVO_MOTOR_B_PIN 7


#define SENSOR_THRESHOLD 400


class FioMotorDriver
{
    public:
        

        FioMotorDriver();
        void forward(uint16_t pwm);
        void backward(uint16_t pwm);
        void turnRight(uint16_t pwm);
        void turnLeft(uint16_t pwm);
        void turnRightAxis(uint16_t pwm);
        void turnLeftAxis(uint16_t pwm);
        void forward();
        void backward();
        void turnRight();
        void turnLeft();
        void turnRightAxis();
        void turnLeftAxis();
        void stop();
        void test();
        void attachServoMotor(uint8_t pinServo1, uint8_t pinServo2);
        void attach();
 
    private:        
        Servo _servoA;
        Servo _servoB;
        uint8_t _pinServoA;
        uint8_t _pinServoB;
};
 
#endif
