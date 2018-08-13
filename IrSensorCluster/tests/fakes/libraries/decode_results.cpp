#include "decode_results.h"

decode_results::~decode_results() = default;

decode_results::decode_results() {
    decode_type = 0;
    value = 0l;
    bits = 0;
    rawbuf = nullptr;

    rawlen = 0;
}
