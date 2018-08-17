//
// Created by graham on 8/14/18.
//

#ifndef IR_SENSOR_CLUSTER_COMMOCONTROLLER_H
#define IR_SENSOR_CLUSTER_COMMOCONTROLLER_H

#include <Arduino.h>

class CommoController {
public:
    explicit CommoController(uint8_t serialPinNumber) {
        _serialPinNumber = serialPinNumber;

    }
    void registerMessageReceiver(int taskHandle, String routingSymbol);

private:
    int _serialPinNumber;
};


#endif //IR_SENSOR_CLUSTER_COMMOCONTROLLER_H
