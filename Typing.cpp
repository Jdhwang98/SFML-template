//
// Created by Johnathan Hwang on 11/16/22.
//

#include "Typing.h"

void Typing::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if (sf::Event::TextEntered == event.type) {
        std::string s = getString();
        s += (char)event.text.unicode;
        setString(s);
    }
}
