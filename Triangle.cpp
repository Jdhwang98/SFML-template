//
// Created by Johnathan Hwang on 11/1/22.
//

#include "Triangle.h"

Triangle::Triangle() : Triangle(100.f) {

}

Triangle::Triangle(float size) : States(), sf::CircleShape(size,3) {

}

void Triangle::update() {
    if (checkState(HOVERED))
        setFillColor(sf::Color::Blue);
    else
        setFillColor(sf::Color::White);

}

void Triangle::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if (MouseEvent::isHovered(getGlobalBounds(),window)) {
        enableState(HOVERED);

    }
    else {
        disableState(HOVERED);
    }
}
