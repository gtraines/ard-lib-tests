//
// Created by graham on 8/14/18.
//

#ifndef IR_SENSOR_CLUSTER_COMMOCONTROLLER_H
#define IR_SENSOR_CLUSTER_COMMOCONTROLLER_H

#include <Arduino.h>
#include <commando.h>

class CommoController {
public:
    explicit CommoController();
private:
    static Commando* _commandoInstance;
    void _registerProtocols();

};


#endif //IR_SENSOR_CLUSTER_COMMOCONTROLLER_H
