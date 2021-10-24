//
// Created by gabri on 23.10.2021.
//

#include "MeanBufor.h"
#include <iostream>

MeanBufor::MeanBufor():Bufor() {}

MeanBufor::MeanBufor(int size1): Bufor(size1) {}

double MeanBufor::calculate() {
    int suma = 0;
    for(int i = 0; i < getSize(); i++){
        suma += getTab(i);
    }
    return suma / getSize();
}
