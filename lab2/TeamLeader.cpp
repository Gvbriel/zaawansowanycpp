//
// Created by gabri on 23.10.2021.
//

#include "TeamLeader.h"
#include <iostream>

TeamLeader::TeamLeader(string surname1, int age1, int experience1, float salary1) : Employee(surname1, age1,
                                                                                                    experience1,
                                                                                                    salary1) {
}

TeamLeader::TeamLeader() {}

int TeamLeader::calculateSalary(int value) {
    return value*(1+getAge()+getExperience());
}

void TeamLeader::show() {
    cout << "Jestem Team Leader z " << getExperience() << " doswiadczeniem.\n";
}
