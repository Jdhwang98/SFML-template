//
// Created by Johnathan Hwang on 11/11/22.
//

#include "Textbox.h"

Textbox::Textbox() {

}

Textbox::Textbox(sf::Vector2f boxSize, sf::Vector2f pos) {
    setUpTextBox(boxSize,pos);
    setUpTextCursor();
    setUpText();

}

void Textbox::setUpTextCursor() {
    sf::FloatRect pos = textBox.getGlobalBounds();
    textCursor.setSize({3, pos.height});
    textCursor.setFillColor(sf::Color::Red);
    textCursor.setPosition(pos.left,pos.top+pos.height * .2f);
}

void Textbox::setUpTextBox(sf::Vector2f boxSize, sf::Vector2f pos) {
    textBox.setSize(boxSize);
    textBox.setPosition(pos);
    textBox.setOutlineColor(sf::Color::Blue);
    textBox.setOutlineThickness(5.f);
}

void Textbox::setUpText() {
    sf::FloatRect pos = textBox.getGlobalBounds();
    font.loadFromFile("Font/OpenSans-Bold.ttf");
    userInput.setFont(font);
    userInput.setFillColor(sf::Color::Black);
    userInput.setCharacterSize(pos.height * .7);
    userInput.setPosition(pos.left +9.f, pos.top );
}

void Textbox::setUpLabel(const std::string text) {
    sf::FloatRect pos = textBox.getGlobalBounds();
    font.loadFromFile("Font/OpenSans-Bold.ttf");
    label.setFont(font);
    label.setFillColor(sf::Color::Yellow);
    label.setPosition(pos.left,pos.top - pos.height/2.5);
    label.setCharacterSize(pos.height * .3f);
    label.setString(text);
}

void Textbox::draw(sf::RenderTarget &window, sf::RenderStates states) const  {
    window.draw(textBox);
    window.draw(textCursor);
    window.draw(label);
    window.draw(userInput);
}

void Textbox::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if (MouseEvents<sf::FloatRect>::mouseClicked(textBox.getGlobalBounds(),window)) {
        enableState(TEXT_INPUT);
        enableState(CURSOR_MOVE);
        enableState(BlINKING);
        enableState(BACKSPACE);
    }
    else if (MouseEvents<sf::FloatRect>::mouseWindow(textBox.getGlobalBounds(),window)) {
        disableState(TEXT_INPUT);
        disableState(CURSOR_MOVE);
        disableState(BlINKING);
        disableState(BACKSPACE);
    }
    if (event.type == sf::Event::TextEntered && checkState(TEXT_INPUT)) {
        if (event.text.unicode < 128 && event.text.unicode != 8) {
            input += event.text.unicode;
            userInput.setString(input);
            textSize++;
        }
    }
}

void Textbox::update() {
    sf::Vector2f textPos = userInput.findCharacterPos(textSize);
    if (checkState(CURSOR_MOVE)) {
        textCursor.setPosition(textPos.x,textPos.y);
    }
    if (KeyShortCuts::isBackspace() && !input.empty() && checkState(BACKSPACE)) {
        if (clock.getElapsedTime().asSeconds() > .17) {
            input.pop_back();
            textSize--;
            userInput.setString(input);
            clock.restart();
        }
    }
    if (!textBox.getGlobalBounds().contains(textCursor.getPosition())) {
        disableState(TEXT_INPUT);
    }
    if (checkState(BlINKING)) {
        if (clock.getElapsedTime().asSeconds() > .25) {
            toggleState(BLINK_ON);
            clock.restart();
        }
        if(checkState(BLINK_ON)) {
            textCursor.setFillColor(sf::Color::Red);
        }
        else {
            textCursor.setFillColor(sf::Color::Transparent);
        }
    }
    else {
        textCursor.setFillColor(sf::Color::Transparent);
    }
}


