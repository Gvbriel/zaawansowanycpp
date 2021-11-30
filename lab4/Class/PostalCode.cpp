//
// Created by gabri on 26.11.2021.
//

#include "../Headers/PostalCode.h"
#include <iostream>
#include <utility>
using namespace std;

PostalCode::PostalCode() {
    citizens = 1;
}

PostalCode::PostalCode(string code1){
    this->code  = std::move(code1);
    citizens = 1;
}

void PostalCode::incrementCitizens() {
    citizens++;
}

int PostalCode::getCitizens() const {
    return citizens;
}

string PostalCode::getCode() {
    return code;
}
