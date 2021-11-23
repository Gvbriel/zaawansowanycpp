//
// Created by gabri on 23.10.2021.
//

#ifndef LAB2_MAXBUFOR_H
#define LAB2_MAXBUFOR_H

#include "Bufor.h"
#include <iostream>

using namespace std;
class MaxBufor: public Bufor{
public:
    MaxBufor();
    MaxBufor(int size1);
    double calculate() override;
    void add(int value) override;
};


#endif //LAB2_MAXBUFOR_H
