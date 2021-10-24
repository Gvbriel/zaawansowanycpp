//
// Created by gabri on 23.10.2021.
//

#ifndef LAB2_MEANBUFOR_H
#define LAB2_MEANBUFOR_H
#include <iostream>
#include "Bufor.h"


class MeanBufor: public Bufor{
public:
    MeanBufor();
    MeanBufor(int size1);
    double calculate() override;
};


#endif //LAB2_MEANBUFOR_H
