//
// Created by Johnathan Hwang on 11/1/22.
//

#include "States.h"

States::States() {
    for(int i = 0; i < LAST_STATE; i++) {
        states[static_cast<StatesEnum>(i)] = false;
    }
}

bool States::checkState(StatesEnum state) {
    return states.at(state);
}

void States::toggleState(StatesEnum state) {
    states.at(state) ^= 1;
}

void States::enableState(StatesEnum state) {
    states.at(state) = true;
}

void States::disableState(StatesEnum state) {
    states.at(state) = false;

}
