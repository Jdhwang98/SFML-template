//
// Created by Johnathan Hwang on 11/16/22.
//

#ifndef SFML_TEMPLATE_TYPING_H
#define SFML_TEMPLATE_TYPING_H
#include <SFML/Graphics.hpp>
#include "GUIcomponent.h"
#include "History.h"
class Typing : public sf::Text {
public:
 virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
};


#endif //SFML_TEMPLATE_TYPING_H
