//
// Created by Johnathan Hwang on 11/1/22.
//

#include "MouseEvent.h"

bool MouseEvent::isHovered(const sf::FloatRect &objBounds, const sf::RenderWindow& window) {
    sf::Vector2f mPos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return objBounds.contains(mPos);
}
