//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_MOUSEEVENTS_H
#define SFML_TEMPLATE_MOUSEEVENTS_H
#include <SFML/Graphics.hpp>
#include "States.h"
template<class T>
class MouseEvents {
private:
    static sf::Clock clock;
    static int clicks;
    static void countClicks(sf::Event event);

public:
    static bool mouseClicked(const T& obj, sf::RenderWindow& window);
    static bool mouseWindow(const T& obj, sf::RenderWindow& window);
    static bool mouseDoubleClicked();
    static bool mouseTripleClicked();
    static bool draggedOver(const T& obj, sf::RenderWindow& window, sf::Event event);
    static bool isHovered(const T& obj, sf::RenderWindow& window);


};

#include "MouseEvents.cpp"
#endif //SFML_TEMPLATE_MOUSEEVENTS_H
