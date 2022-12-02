//
// Created by Johnathan Hwang on 11/11/22.
//
#ifndef SFML_TEMPLATE_MOUSEEVENTS_CPP
#define SFML_TEMPLATE_MOUSEEVENTS_CPP
#include "MouseEvents.h"

template<class T>
void MouseEvents<T>::countClicks(sf::Event event) {

}

template<class T>
bool MouseEvents<T>::mouseClicked(const T &obj, sf::RenderWindow &window) {

    return isHovered(obj,window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents<T>::mouseWindow(const T &obj, sf::RenderWindow &window) {
    return !isHovered(obj,window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents<T>::mouseDoubleClicked() {
    return false;
}

template<class T>
bool MouseEvents<T>::mouseTripleClicked() {
    return false;
}

template<class T>
bool MouseEvents<T>::draggedOver(const T &obj, sf::RenderWindow &window, sf::Event event) {
    return false;
}

template<class T>
bool MouseEvents<T>::isHovered(const T &obj, sf::RenderWindow &window) {
    sf::Vector2f mPos = (sf::Vector2f) sf::Mouse::getPosition(window);
    return obj.contains(mPos);
}
#endif