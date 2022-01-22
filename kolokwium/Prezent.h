//
// Created by Gabriel Polak on 06/12/2021.
//

#ifndef KOLOKWIUM_PREZENT_H
#define KOLOKWIUM_PREZENT_H
#include <iostream>
#include "Dziecko.h"

using namespace std;

class Prezent {
private:
    string id;
    int wiekMin;
    int wiekMax;
public:
    Prezent(const string &id, int wiekMin, int wiekMax);

    const string &getId() const;

    int getWiekMin() const;
    int getWiekMax() const;
    bool czyMozeOtrzymac(Dziecko dziecko);
};


#endif //KOLOKWIUM_PREZENT_H
