//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_HISTORYNODE_H
#define SFML_TEMPLATE_HISTORYNODE_H
#include "Snapshot.h"
#include "GUIcomponent.h"
struct HistoryNode {
    Snapshot* snapshot;
    GUIcomponent* component;



};
#endif //SFML_TEMPLATE_HISTORYNODE_H
