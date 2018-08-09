//
// Created by graham on 8/8/18.
//
#include <catch.hpp>
#include <Arduino.h>

#include <decode_results.h>

TEST_CASE("Can create and retrieve values from decode_results", "[decode_results]") {
    decode_results* test_result = new decode_results();

    REQUIRE(test_result->rawbuf == nullptr);
}
