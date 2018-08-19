
#ifndef IR_SENSOR_CLUSTER__COMMO_MESSAGING__H
#define IR_SENSOR_CLUSTER__COMMO_MESSAGING__H

#include <Arduino.h>

// message types
#define ACK 1
#define NACK 2
#define COMMAND_RESULT 5
#define QUERY_RESPONSE 9
#define SENSOR_DATA 13

// command results
#define SUCCESS_RESULT 129
#define ABORTED_RESULT 66
#define ERROR_RESULT 130

typedef struct command_result_message {
    uint8_t result;
    uint32_t messageId;
    
};

typedef struct sensor_data_message {
    uint8_t sensorId;
    byte sensorData[];
    };
#endif