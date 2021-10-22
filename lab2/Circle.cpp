//
// Created by Gabriel Polak on 11/10/2021.
//

#include "Circle.h"
#include <iostream>
#include <math.h>
using namespace std;

Circle::Circle(float r1) {
    cout << "Konstruktor klasy Circle" << endl;
    r = r1;
}

Circle::~Circle() {
    cout << "Destruktor klasy Circle" << endl;
}

void Circle::calculateArea() {
    float p = 3.14 * pow(r,2);
    setArea(p);
}

void Circle::show() {
    cout << "Pole z klasy Circle wynosi " << getArea() << endl;
}