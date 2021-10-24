//
// Created by Gabriel Polak on 11/10/2021.
//

#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
    cout << "Bezargumentowy konstruktor" << endl;
}

Employee::Employee(string surname1, int age1, int experience1, float salary1) {
    surname = surname1;
    age = age1;
    experience = experience1;
    salary = salary1;
}

int Employee::getAge() {
    return age;
}

int Employee::getExperience() {
    return experience;
}

const string &Employee::getSurname() const {
    return surname;
}

void Employee::show(){
    cout << "It's me!\n";
}

int Employee::ageEmployment() {
    return age - experience;
}

float Employee::getSalary() {
    return salary;
}

Employee::~Employee() {

}
