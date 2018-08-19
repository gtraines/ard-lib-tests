//
// Created by graham on 8/8/18.
//
#include <catch.hpp>
#include <Arduino.h>

#include <decode_results.h>

TEST_CASE("Can create and retrieve values from decode_results", "[decode_results]") {
    decode_results* test_result = new decode_results();
    test_result->value = 500;

    REQUIRE(test_result->rawbuf == nullptr);
    REQUIRE(test_result->rawlen == 0);
    REQUIRE(test_result->value == 500);
}

TEST_CASE("Can create obj instance and retrieve values from pointer to obj", "[decode_results]") {
    decode_results result;
    result = decode_results();
    result.value = 1234;

    // resultPtr now holds the address of result
    decode_results* resultPtr = &result;

    REQUIRE(result.rawbuf == nullptr);
    REQUIRE(resultPtr->rawbuf == nullptr);

    REQUIRE(result.value == 1234);
    REQUIRE(resultPtr->value == 1234);

    result.value = 8675;
    REQUIRE(result.value == 8675);
    REQUIRE(resultPtr->value == 8675);
}

TEST_CASE("Can retrieve values from indirection op on ptr", "[decode_results]") {

    decode_results* resultPtr = new decode_results();
    resultPtr->value = 54321;

    // Dereference pointer
    decode_results resultOfIndirection = *resultPtr;

    REQUIRE(resultOfIndirection.rawbuf == nullptr);
    REQUIRE(resultPtr->rawbuf == nullptr);

    REQUIRE(resultOfIndirection.value == 54321);
    REQUIRE(resultPtr->value == 54321);

    // Ensure the pointer and raw obj are no longer using the same address
    resultOfIndirection.value = 8675;
    REQUIRE(resultOfIndirection.value == 8675);
    REQUIRE(resultPtr->value == 54321);
}

TEST_CASE("Can point 2 pointers to same address", "[decode_results]") {

    decode_results* resultPtr1 = new decode_results();
    decode_results* resultPtr2 = resultPtr1;

    resultPtr1->value = 54321;
    REQUIRE(resultPtr1->value == 54321);
    REQUIRE(resultPtr2->value == 54321);

    // Ensure mutation of one pointer prop results in both returning the same
    resultPtr2->value = 8675;
    REQUIRE(resultPtr2->value == 8675);
    REQUIRE(resultPtr1->value == 8675);
}


TEST_CASE("Can create array of pointers", "[decode_results]") {
    decode_results* comp_res = new decode_results();
    
    decode_results* resultArr[5] = { 
        new decode_results(),
        new decode_results(),
        new decode_results(),
        new decode_results(),
        new decode_results()
    };
    
    REQUIRE(resultArr[0]->rawbuf == nullptr);
    REQUIRE(resultArr[1]->value == comp_res->value);
    REQUIRE(resultArr[2]->decode_type == comp_res->decode_type);
    
}