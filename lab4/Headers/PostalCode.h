//
// Created by gabri on 26.11.2021.
//

#ifndef LAB4_POSTALCODE_H
#define LAB4_POSTALCODE_H
#include <iostream>
#include <string>

using namespace std;

class PostalCode {
private:
    int citizens;
    string code;
public:
    PostalCode();
    PostalCode(string code1);
    int getCitizens() const;
    void incrementCitizens();
    string getCode();
};

#endif //LAB4_POSTALCODE_H
