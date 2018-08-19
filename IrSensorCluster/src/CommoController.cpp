//
// Created by graham on 8/14/18.
//
#include <Arduino.h>
#include <commando>
#include "commo_messaging.h"
#include "CommoController.h"

CommoController::CommoController() {
    this->_commandoInstance = new Commando(Serial*);

}

void CommoController::_registerProtocols() {
    auto* traverseProtocol = new CommandProtocol(*(CommoController::_commandoInstance));
    CommoController::_commandoInstance->register_protocol(TRAVERSE_CMD_PROTO_IDX, *traverseProtocol);

    auto* elevationProtocol = new CommandProtocol(*(CommoController::_commandoInstance));
    CommoController::_commandoInstance->register_protocol(ELEVATION_CMD_PROTO_IDX, *elevationProtocol);

    auto* cannonProtocol = new CommandProtocol(*(CommoController::_commandoInstance));
    CommoController::_commandoInstance->register_protocol(CANNON_CMD_PROTO_IDX, *cannonProtocol);
}
