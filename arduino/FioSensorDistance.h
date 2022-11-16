 /* ---------------------------------------------------------------------------------------
 * Autor / Author: Eduardo Fritzen eduardo@fritzen.io
 * Não é permitida o uso para fins comerciais deste código sem a autrorização por escrito do autor
 * Use of this code for commercial purposes is not permitted without written authorization from the author
 * ---------------------------------------------------------------------------------------
 */
#ifndef FioDistanceSensor_h
#define FioDistanceSensor_h
 
#include <Arduino.h>
#include <stdio.h>
#include <inttypes.h>

#include <Servo.h>
#include <Wire.h>

#define DIGITAL_DISTANCE_PIN 9
#define MAX_DIST 200
#define COLLISION_DIST 150


class FioSensorDistance {
    public:        
        FioSensorDistance();
        bool isCollision();
        void attach();
};
 
#endif
