//
// Created by gabri on 03.12.2021.
//

#ifndef LAB12_CAR_H
#define LAB12_CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int rok_produkcji;
    float pojemnosc_silnika;
public:
    Car(const string &model, int rokProdukcji, float pojemnoscSilnika);

    const string &getModel() const;
    int getRokProdukcji() const;
    float getPojemnoscSilnika() const;
    void setModel(const string &model);
    void setRokProdukcji(int rokProdukcji);
    void setPojemnoscSilnika(float pojemnoscSilnika);
    void showCar();
};


#endif //LAB12_CAR_H
