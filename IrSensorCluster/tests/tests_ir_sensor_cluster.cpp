//
// Created by graham on 8/12/18.
//
#include <catch.hpp>
#include <Arduino.h>
#include <IrSensorCluster.h>
#include <iostream>

using namespace std;

TEST_CASE("Can construct sxr cluster", "[IrSensorCluster]") {
    IrSensorCluster realCluster = IrSensorCluster();

    REQUIRE(realCluster.checkNextSensor());
    REQUIRE(realCluster.getSensorReading() != nullptr);
}

TEST_CASE("Can get a sxr reading", "[IrSensorCluster]") {
    IrSensorCluster realCluster = IrSensorCluster();
    for (int idx = 0; idx < 5; idx++) {

        REQUIRE(realCluster.checkNextSensor());
        auto* sxrReading = realCluster.getSensorReading();
        cout << sxrReading->sensorName;
        cout << endl;
        cout << sxrReading->readingValue;
        cout << endl;
    }

}