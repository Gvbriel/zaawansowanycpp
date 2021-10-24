//
// Created by Gabriel Polak on 11/10/2021.
//

#ifndef LAB2_DEVELOPER_H
#define LAB2_DEVELOPER_H
#include "Employee.h"
#include <iostream>
using namespace std;


class Developer: public Employee {
public:
    Developer(string surname1, int age1, int experience1, float salary1);
    Developer();
    int calculateSalary(int value) override;

};


#endif //LAB2_DEVELOPER_H
