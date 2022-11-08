//
// Created by Johnathan Hwang on 11/1/22.
//

#include "Application.h"

void Application::run() {
    Triangle t;

    sf::RenderWindow window(sf::VideoMode(600, 600), "My window");
    //sf::CircleShape shape(300.f);
    //shape.setFillColor(sf::Color(100, 250, 50));
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            t.eventHandler(window,event);
        }
        t.update();
        window.clear();
        window.draw(t);
        window.display();
    }
}
