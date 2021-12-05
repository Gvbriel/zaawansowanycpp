//
// Created by gabri on 03.12.2021.
//

#include "Car.h"

Car::Car(const string &model, int rokProdukcji, float pojemnoscSilnika) : model(model), rok_produkcji(rokProdukcji),
                                                                          pojemnosc_silnika(pojemnoscSilnika) {}

void Car::setModel(const string &model) {
    Car::model = model;
}

void Car::setRokProdukcji(int rokProdukcji) {
    rok_produkcji = rokProdukcji;
}

void Car::setPojemnoscSilnika(float pojemnoscSilnika) {
    pojemnosc_silnika = pojemnoscSilnika;
}

const string &Car::getModel() const {
    return model;
}

int Car::getRokProdukcji() const {
    return rok_produkcji;
}

float Car::getPojemnoscSilnika() const {
    return pojemnosc_silnika;
}

void Car::showCar() {
    cout << model << " wyprodukowany w " << rok_produkcji << ", o pojemnosci " << pojemnosc_silnika << endl;
}