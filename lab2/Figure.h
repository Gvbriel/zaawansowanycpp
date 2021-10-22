//
// Created by Gabriel Polak on 11/10/2021.
//

#ifndef LAB2_FIGURE_H
#define LAB2_FIGURE_H

#include <iostream>
using namespace std;

class Figure {
private:
    float area;
public:
    Figure();
    virtual ~Figure();
    float getArea();
    void setArea(float area1);
    virtual void calculateArea() = 0; //informujemy o istnieniu takiej metody jednak nie jest ona dekarowana
    virtual void show() = 0;
};


#endif //LAB2_FIGURE_H
