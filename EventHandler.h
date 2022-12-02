//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_EVENTHANDLER_H
#define SFML_TEMPLATE_EVENTHANDLER_H
#include <SFML/Graphics.hpp>

class EventHandler {
private:

public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //SFML_TEMPLATE_EVENTHANDLER_H
