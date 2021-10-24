//
// Created by gabri on 23.10.2021.
//

#ifndef LAB2_TEAMLEADER_H
#define LAB2_TEAMLEADER_H


#include "Employee.h"
#include <iostream>

class TeamLeader: public Employee{
public:
    TeamLeader();
    TeamLeader(string surname1, int age1, int experience1, float salary1);

    int calculateSalary(int value) override;

    void show() override;
};


#endif //LAB2_TEAMLEADER_H
