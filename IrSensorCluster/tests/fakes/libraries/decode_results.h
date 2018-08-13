//
// Created by graham on 8/8/18.
//

#ifndef ARD_LIB_TESTS_DECODE_RESULTS_H
#define ARD_LIB_TESTS_DECODE_RESULTS_H

#include <Arduino.h>


// Results returned from the decoder
class decode_results {
public:
    decode_results();
    ~decode_results();
    int decode_type; // NEC, SONY, RC5, UNKNOWN
    unsigned long value; // Decoded value
    int bits; // Number of bits in decoded value
    volatile unsigned int *rawbuf; // Raw intervals in .5 us ticks
    int rawlen; // Number of records in rawbuf.
};


#endif //ARD_LIB_TESTS_DECODE_RESULTS_H
