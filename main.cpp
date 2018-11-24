//
// Created by asphox on 13/11/18.
//

#include <Arduino.h>
#include "HardwareEncoder.h"

int main()
{
    Serial.begin(9600);
    delay(1000);
    Encoder1.setup(ENCODERMODE::PULLUP);
    Encoder1.start();
    while(true)
    {
        int32_t t = Encoder1.count();
        Serial.println(t);
    }
    return 0;
}
