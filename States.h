//
// Created by Johnathan Hwang on 11/1/22.
//

#ifndef SFML_TEMPLATE_STATES_H
#define SFML_TEMPLATE_STATES_H
#include <map>
#include "StatesEnum.h"

class States {
private:
    std::map<StatesEnum, bool> states;

public:
    States();
    bool checkState(StatesEnum state);
    void toggleState(StatesEnum state);
    void enableState(StatesEnum state);
    void disableState(StatesEnum state);
};


#endif //SFML_TEMPLATE_STATES_H
