//
// Created by gabri on 06.10.2021.
//

#include <iostream>
#include <ostream>
#include "../Headers/Person.h"

using namespace std;

Person::Person(string name1, string surname1, int age1) {
    name = name1;
    surname = surname1;
    age = age1;
    cout << "Konstruktor klasy bazowej Person\n";
}

Person::Person(){
    cout << "Konstruktor bez argumentowy klasy Person.\n";
}

void Person::init(string name1, string surname1, int age1) {
    name = name1;
    surname = surname1;
    age = age1;
}

void Person::setAge(int age1) {
    age = age1;
}

string Person::getSurname() {
    return surname;
}

bool Person::is_18() {
    if(age>=18){
        return true;
    }else{
        return false;
    }
}

int Person::getAge() {
    return age;
}

void Person::showInfoPerson() {
    cout << "Imie";

//    cout << "Imie: "<<name << ", nazwisko: " << surname << ", wiek: " << age;
}
