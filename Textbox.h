//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_TEXTBOX_H
#define SFML_TEMPLATE_TEXTBOX_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "GUIcomponent.h"
#include "MouseEvents.h"
#include "KeyShortCuts.h"
#include <string>

class Textbox : public GUIcomponent {
private:
    std::size_t textSize = 0;
    sf::RectangleShape textBox;
    sf::RectangleShape textCursor;
    sf::Text label;
    std::string input;
    sf::Text userInput;
    sf::Clock clock;
    sf::Font font;

public:
    Textbox();
    Textbox(sf::Vector2f boxSize, sf::Vector2f pos);
    void setUpTextCursor();
    void setUpTextBox(sf::Vector2f boxSize, sf::Vector2f pos);
    void setUpText();
    void setUpLabel(std::string label);
    //void draw(sf::RenderTarget& window, sf::RenderStates states) override;
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);

    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;

    virtual void update();
};


#endif //SFML_TEMPLATE_TEXTBOX_H
