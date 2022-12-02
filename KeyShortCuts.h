//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_KEYSHORTCUTS_H
#define SFML_TEMPLATE_KEYSHORTCUTS_H
#include <SFML/Graphics.hpp>

class KeyShortCuts {
public:
    static bool isUndo();
    static bool isBackspace();
    char checkKey();

};


#endif //SFML_TEMPLATE_KEYSHORTCUTS_H
