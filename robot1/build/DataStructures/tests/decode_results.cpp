#include "decode_results.h"

decode_results::~decode_results() = default;

decode_results::decode_results() {
    decode_type = -1;
    value = 0l;
    bits = -1;
    rawbuf = nullptr;

    rawlen = -1;
}
