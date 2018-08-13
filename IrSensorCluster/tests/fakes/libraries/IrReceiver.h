//
// Created by graham on 8/12/18.
//

#ifndef IR_SENSOR_CLUSTER_IRRECEIVER_H
#define IR_SENSOR_CLUSTER_IRRECEIVER_H

#include <Arduino.h>
#include "decode_results.h"

class IrReceiver {
public:
    explicit IrReceiver(uint8_t pinNumber);
    void enableIRIn();
    bool decode(decode_results* result);
};


#endif //IR_SENSOR_CLUSTER_IRRECEIVER_H
