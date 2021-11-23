//
// Created by Gabriel Polak on 11/10/2021.
//

#ifndef LAB2_EMPLOYEE_H
#define LAB2_EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
private:
    string surname;
    int age;
    int experience;
    float salary;
public:
    Employee(string surname1, int age1, int experience1, float salary1);
    Employee();
    ~Employee();
    virtual void show();
    virtual int calculateSalary(int value) = 0;
    float getSalary();
    int ageEmployment();
    int getAge();
    int getExperience();
    const string &getSurname() const;
};


#endif //LAB2_EMPLOYEE_H
