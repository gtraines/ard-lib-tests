#ifndef IR_SENSOR_CLUSTER__H
#define IR_SENSOR_CLUSTER__H

#include <Arduino.h>
#include <IrClusterStructs.h>

class IrSensorCluster {
public:
    IrSensorCluster();
    ~IrSensorCluster();
    bool checkNextSensor();
    sensor_reading_t* getSensorReading();
private:
    /* data members */
    directional_sensor_t* _createSensorEntry(uint8_t pinNumber, String sensorName);
    int _currentSensorIndex;
    directional_sensor_t* _sensorArray[5];
};

#endif // IR_SENSOR_CLUSTER__H
