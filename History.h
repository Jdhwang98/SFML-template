//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_HISTORY_H
#define SFML_TEMPLATE_HISTORY_H
#include <stack>
#include "HistoryNode.h"
#include "KeyShortCuts.h"

class History {
private:
    static std::stack<HistoryNode> stack;
public:
//    static void pushHistory(const HistoryNode& snapshot);
//    static void popHistory();
//    static HistoryNode& topHistory();
//    static void addEventHandler(sf::RenderWindow& window, sf::Event event);

};


#endif //SFML_TEMPLATE_HISTORY_H
