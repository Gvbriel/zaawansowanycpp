//
// Created by gabri on 23.10.2021.
//

#include "Bufor.h"
#include <iostream>

using namespace std;

void set(int *ar, int size){
    for(int i = 0; i < size; i++){
        ar[i] = NULL;
    }
}

Bufor::Bufor() {
    ar = new int[10];
    index = 0;
    size = 10;
    //set(ar, size);
}

Bufor::Bufor(int size1) {
    ar = new int[size1];
    index = 0;
    size = size1;
    //set(ar, size);
}

Bufor::~Bufor() {
    delete ar;
}

void Bufor::setIndex(int index1) {
    index = index1;
}

void Bufor::add(int value) {
    ar[index] = value;
}

int Bufor::getIndex() {
    return index;
}

int Bufor::getSize() {
    return size;
}

int Bufor::getTab(int i) {
    return ar[i];
}

void Bufor::showAr() {
    for(int i = 0; i < size; i++){
        cout << ar[i] <<  " ";
    }
}