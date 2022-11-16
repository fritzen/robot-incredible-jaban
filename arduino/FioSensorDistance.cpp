 /* ---------------------------------------------------------------------------------------
 * Autor / Author: Eduardo Fritzen - eduardo@fritzen.io
 * Não é permitido o uso para fins comerciais deste código sem a autorização por escrito do autor
 * Use of this code for commercial purposes is not permitted without written authorization from the author
 * ---------------------------------------------------------------------------------------
 */
#include "FioSensorDistance.h"
#include <Arduino.h>

FioSensorDistance::FioSensorDistance()
{

}

void FioSensorDistance::attach()
{       
  pinMode(DIGITAL_DISTANCE_PIN,INPUT_PULLUP);
}



bool FioSensorDistance::isCollision()
{
    int mm = 2500;

    if (digitalRead(DIGITAL_DISTANCE_PIN)==LOW) {
        mm = 0;
    }

    Serial.print(mm);
    return (mm < COLLISION_DIST);
}
