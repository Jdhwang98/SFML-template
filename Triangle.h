//
// Created by Johnathan Hwang on 11/1/22.
//

#ifndef SFML_TEMPLATE_TRIANGLE_H
#define SFML_TEMPLATE_TRIANGLE_H
#include "States.h"
#include <SFML/Graphics.hpp>
#include "MouseEvent.h"

class Triangle : public States, public sf::CircleShape {
private:
public:
    Triangle();
    Triangle(float size);

    void update();
    void eventHandler(sf::RenderWindow& window, sf::Event event);

};


#endif //SFML_TEMPLATE_TRIANGLE_H
