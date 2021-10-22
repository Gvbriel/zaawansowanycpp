//
// Created by Gabriel Polak on 11/10/2021.
//

#include "Figure.h"
#include <iostream>
using namespace std;

Figure::Figure() {
    cout << "Konstruktor klasy Figure" << endl;
}

Figure::~Figure() {
    cout << "Wirutalny dekonstruktor." << endl;
}

float Figure::getArea() {
    return area;
}

void Figure::setArea(float area1) {
    area = area1;
}
