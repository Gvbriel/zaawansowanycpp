//
// Created by gabri on 23.10.2021.
//

#ifndef LAB2_BUFOR_H
#define LAB2_BUFOR_H
#include <iostream>

using namespace std;

class Bufor {
private:
    int size;
    int index;
    int *ar;
public:
    Bufor();
    Bufor(int size1);
    ~Bufor();
    virtual void add(int value);
    virtual double calculate() =0;
    int getIndex();
    void setIndex(int index1);
    int getSize();
    int getTab(int i);
    void showAr();
};


#endif //LAB2_BUFOR_H
