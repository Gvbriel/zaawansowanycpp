//
// Created by gabri on 26.11.2021.
//

#ifndef LAB4_CITIZEN_H
#define LAB4_CITIZEN_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Citizen {
private:
    string name;
    string surname;
    string postal_code;
    int age;
    char sex;
public:
    Citizen();
    Citizen(const string &name, const string &surname, const string &postalCode, int age, char sex);

    const string &getName() const;

    Citizen(const string &surname, int age);

    const string &getSurname() const;
    const string &getPostalCode() const;
    int getAge() const;
    char getSex() const;
    void show();
};


#endif //LAB4_CITIZEN_H
