//
// Created by Johnathan Hwang on 11/1/22.
//

#include "Application.h"

void Application::run() {
    Textbox textbox({350,80},{100,100});
    textbox.setUpLabel("World Wide Web");

    sf::RenderWindow window(sf::VideoMode(1820, 1080), "Text Box Editor");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            textbox.eventHandler(window,event);

        }
        textbox.update();

        window.clear();
        window.draw(textbox);
        window.display();
    }
}
