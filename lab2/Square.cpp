//
// Created by Gabriel Polak on 11/10/2021.
//

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(float a1) {
    cout << "Konstruktor klasy Square" << endl;
    a = a1;
}

Square::~Square(){
    cout << "Destruktor klasy Square" << endl;
}

void Square::calculateArea() {
    float p = a * a;
    setArea(p);
}

void Square::show() {
    cout << "Pole z klasy Square wynosi " << getArea() << endl;
}