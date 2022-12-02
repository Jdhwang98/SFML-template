//
// Created by Johnathan Hwang on 11/16/22.
//

#ifndef SFML_TEMPLATE_TEXTINPUT_H
#define SFML_TEMPLATE_TEXTINPUT_H
#include <SFML/Graphics.hpp>
#include "Snapshot.h"
#include "GUIcomponent.h"
#include "InputBox.h"
#include "Typing.h"
#include "TextInputSnapshot.h"

class TextInput {
private:
    Typing typing;
    InputBox inputBox;
public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void applySnapshot(Snapshot* snapshot);
    virtual void update();
};


#endif //SFML_TEMPLATE_TEXTINPUT_H
