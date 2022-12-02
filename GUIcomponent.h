//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_GUICOMPONENT_H
#define SFML_TEMPLATE_GUICOMPONENT_H
#include "SnapshotInterface.h"
#include "EventHandler.h"
#include <SFML/Graphics.hpp>
#include "States.h"

class GUIcomponent : public EventHandler, public SnapshotInterface, public States, public sf::Drawable,
public sf::Transformable {

private:

public:
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
//    virtual Snapshot& getSnapShot() = 0;
//    virtual void applySnapShot(const Snapshot& snapshot) = 0;



};


#endif //SFML_TEMPLATE_GUICOMPONENT_H
