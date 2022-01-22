//
// Created by Gabriel Polak on 10/01/2022.
//

#include "BufferArr.h"

BufferArr::BufferArr(int size) {
    cout << "Konstruktor klasy BufferArr" << endl;
    tab = unique_ptr<int[]>(new int[size]);
    sizeArr = size;
}

void BufferArr::add(int a) {
    if(lastFree > sizeArr){
        cout << "Nie mozna dodac elementu" << endl;
    }else{
        tab[lastFree] = a;
        lastFree++;
    }
}

void BufferArr::write() {
    for(int i = 0; i < lastFree; i++){
        cout << tab[i] << endl;
    }
}

BufferArr::~BufferArr() {
    cout << "Destruktor klasy BufferArr" << endl;
}

int BufferArr::getLastFree() const {
    return lastFree;
}

void BufferArr::setLastFree(int lastFree) {
    BufferArr::lastFree = lastFree;
}

int BufferArr::getSizeArr() const {
    return sizeArr;
}

void BufferArr::setSizeArr(int sizeArr) {
    BufferArr::sizeArr = sizeArr;
}
