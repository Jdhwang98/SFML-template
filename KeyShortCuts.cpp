//
// Created by Johnathan Hwang on 11/11/22.
//

#include "KeyShortCuts.h"

bool KeyShortCuts::isUndo() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Z);
}

bool KeyShortCuts::isBackspace() {
    return sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) ;
}

char KeyShortCuts::checkKey() {
    return sf::Event::MouseButtonPressed;
}
