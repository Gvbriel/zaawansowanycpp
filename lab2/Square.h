//
// Created by Gabriel Polak on 11/10/2021.
//

#ifndef LAB2_SQUARE_H
#define LAB2_SQUARE_H
#include <iostream>
#include "Figure.h"

using namespace std;


class Square: public Figure {
private:
    float a;
public:
    Square(float a1);
    ~Square();
    virtual void calculateArea() override;
    virtual void show() override;

};


#endif //LAB2_SQUARE_H
