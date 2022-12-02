//
// Created by Johnathan Hwang on 11/11/22.
//

#ifndef SFML_TEMPLATE_SNAPSHOT_H
#define SFML_TEMPLATE_SNAPSHOT_H
#include <iostream>

class Snapshot {
private:
    std::string data;
public:
    std::string getData();
    void setData(const std::string data);

};


#endif //SFML_TEMPLATE_SNAPSHOT_H
