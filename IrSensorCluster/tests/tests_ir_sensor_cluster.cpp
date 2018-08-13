//
// Created by graham on 8/12/18.
//

#include <catch.hpp>
#include <Arduino.h>

#include <IrSensorCluster.h>

TEST_CASE("Can construct sxr cluster", "[IrSensorCluster]") {
    IrSensorCluster realCluster = IrSensorCluster();

    REQUIRE(realCluster.checkNextSensor());
    REQUIRE(realCluster.getSensorReading() != nullptr);
}