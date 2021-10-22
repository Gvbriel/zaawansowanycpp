//
// Created by Gabriel Polak on 11/10/2021.
//

#ifndef LAB2_CIRCLE_H
#define LAB2_CIRCLE_H
#include <iostream>
#include "Figure.h"

using namespace std;

class Circle: public Figure {
private:
    float r;
public:
    Circle(float r1);
    ~Circle();
    virtual void calculateArea() override;
    virtual void show() override;
};


#endif //LAB2_CIRCLE_H
