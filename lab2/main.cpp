#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
using namespace std;

void listing11(){
    Figure *sq = new Square(2);
    Figure *cr = new Circle(6);
    sq->calculateArea();
    sq->show();

    cr->calculateArea();
    cr->show();
    delete sq;
    delete cr;
}

void listing12(){
    Figure *f;
    Circle circle(4);
    f = &circle;
    f->calculateArea();
    f->show();
}

int main() {

    return 0;
}
