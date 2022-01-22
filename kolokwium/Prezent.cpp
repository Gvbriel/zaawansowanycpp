//
// Created by Gabriel Polak on 06/12/2021.
//

#include "Prezent.h"

Prezent::Prezent(const string &id, int wiekMin, int wiekMax) : id(id), wiekMin(wiekMin), wiekMax(wiekMax) {}

const string &Prezent::getId() const {
    return id;
}

int Prezent::getWiekMin() const {
    return wiekMin;
}

int Prezent::getWiekMax() const {
    return wiekMax;
}

bool Prezent::czyMozeOtrzymac(Dziecko dziecko) {
    if(dziecko.getWiek() >= wiekMin && dziecko.getWiek() <= wiekMax){
        return true;
    }else{
        return false;
    }
}
