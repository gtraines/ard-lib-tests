//
// Created by graham on 8/13/18.
//
#include <Arduino.h>
#include "IrReceiver.h"
#include "decode_results.h"

bool IrReceiver::decode(decode_results* decodeResults) {
    decodeResults->value = 34;
    decodeResults->decode_type = 0;
    return true;
}

void IrReceiver::enableIRIn() {

}

IrReceiver::IrReceiver(uint8_t pinNumber) {
    this->_assignedPin = pinNumber;
}

