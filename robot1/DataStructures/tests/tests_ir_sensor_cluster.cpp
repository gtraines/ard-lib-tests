
#include <catch.hpp>
#include <Arduino.h>

#include <IrSensorCluster.h>


TEST_CASE("Can instantiate IrSensorCluster", "[IrSensorCluster]") {
    IrSensorCluster* testCluster = new IrSensorCluster();
    
    REQUIRE(testCluster->_sensorArray[0]->irSensor != nullptr);
}