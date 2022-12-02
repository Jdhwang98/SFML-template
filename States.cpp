//
// Created by Johnathan Hwang on 11/11/22.
//

#include "States.h"
States::States()
{

    for (int i = 0; i < LAST_STATE; ++i)
    {
        states[static_cast<statesEnum>(i)] = false;
    }
}

bool States::checkState(statesEnum state)
{
    return states.at(state) ;
}

void States::toggleState(statesEnum state)
{
    states.at(state)  ^= 1;
}

void States::enableState(statesEnum state)
{
    states.at(state) = true;
}

void States::disableState(statesEnum state)
{
    states.at(state) = false;
}