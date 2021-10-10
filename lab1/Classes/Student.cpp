//
// Created by gabri on 08.10.2021.
//

#include <iostream>
#include "../Headers/Student.h"

Student::Student() {
    cout << "Konstruktor bez arg klasy pochodnej Student\n";
}

Student::Student(string name1, string surname1, int age1, string index1) : Person(name1, surname1, age1) {
    index = index1;
    cout << "Konstruktor klasy pochodnej Student\n";
}

void Student::setIndex(int newIndex) {
    index = newIndex;
}

string Student::getIndex() {
    return index;
}

void Student::showInfoStudent() {
    cout << "Informacje o studencie";
}



