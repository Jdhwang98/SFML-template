//
// Created by Johnathan Hwang on 11/1/22.
//

#ifndef SFML_TEMPLATE_MOUSEEVENT_H
#define SFML_TEMPLATE_MOUSEEVENT_H

#include <SFML/Graphics.hpp>

class MouseEvent {
private:
public:
    static bool isHovered(const sf::FloatRect &objBounds, const sf::RenderWindow& window);
};


#endif //SFML_TEMPLATE_MOUSEEVENT_H
