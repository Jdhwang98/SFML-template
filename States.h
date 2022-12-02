//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_STATES_H
#define SFML_TEMPLATE_STATES_H

#include "StatesEnum.h"
#include <iostream>
#include <map>
class States {
private:
    std::map<statesEnum, bool> states;
public:
    States();
    bool checkState(statesEnum state);
    void toggleState(statesEnum state);
    void enableState(statesEnum state);
    void disableState(statesEnum state);
};

#endif //SFML_TEMPLATE_STATES_H
