//
// Created by gabri on 26.11.2021.
//

#include <iostream>
#include <string>
using namespace std;

#include "../Headers/Citizen.h"

Citizen::Citizen() {}

Citizen::Citizen(const string &name, const string &surname, const string &postalCode, int age, char sex) : name(name),
                                                                                                           surname(surname),
                                                                                                           postal_code(
                                                                                                                   postalCode),
                                                                                                           age(age),
                                                                                                           sex(sex) {}
void Citizen::show() {
    cout << "\nName: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Postal code: " << postal_code << endl;
    cout << "Age: " << age << endl;
    cout << "Sex: " << sex << endl;
}

const string &Citizen::getName() const {
    return name;
}

const string &Citizen::getSurname() const {
    return surname;
}

const string &Citizen::getPostalCode() const {
    return postal_code;
}

int Citizen::getAge() const {
    return age;
}

char Citizen::getSex() const {
    return sex;
}

Citizen::Citizen(const string &surname, int age) : surname(surname), age(age) {}
