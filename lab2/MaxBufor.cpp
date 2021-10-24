//
// Created by gabri on 23.10.2021.
//

#include "MaxBufor.h"
#include <iostream>

using namespace std;

MaxBufor::MaxBufor():Bufor() {}
MaxBufor::MaxBufor(int size1): Bufor(size1) {}

double MaxBufor::calculate() {
    int max = getTab(0);
    for (int i = 0; i < getSize(); ++i) {
        if(getTab(i) > max)
        {
            max = getTab(i);
        }
    }
    return max;
}

void MaxBufor::add(int value) {
    bool added = false;
    for(int i = 0; i < getSize(); i++){
        if((getTab(i) == -842150451 || getTab(i) == 0) && !added){
            cout << "Dodaje na indeksie " << i << " taka sama wartosc\n";
            Bufor::setIndex(i);
            Bufor::add(value);
            added = true;
        }
    }
    if(!added){
        cout << "Brak miejsca.\n";
    }
}