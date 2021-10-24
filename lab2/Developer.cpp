//
// Created by Gabriel Polak on 11/10/2021.
//

#include "Developer.h"

Developer::Developer(string surname1, int age1, int experience1, float salary1): Employee(surname1, age1, experience1, salary1) {

}

Developer::Developer() {
    cout << "Konstruktor bezargumentowy dla klasy Developer\n";
}


int Developer::calculateSalary(int value) {
    return value + 0.2*value*(getAge() + getExperience());
}
