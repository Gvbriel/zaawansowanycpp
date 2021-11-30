//
// Created by gabri on 26.11.2021.
//

#ifndef LAB4_CITY_H
#define LAB4_CITY_H

#include "./Citizen.h"
#include "PostalCode.h"
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class City {
private:
    vector<Citizen> citizens;
    string city_name;
    unordered_map<string, PostalCode> PostalCodesMap;

public:
    const string &getCityName() const;

    City(const string &cityName);
    void addCitizen(Citizen &citizen);
    void deleteCitizen(string surname, int age);
    void showCitizens();
    void setCitizens(const vector<Citizen> &citizens);
    void showCity();
    void setPostalCodesMap();
    int getPostalCodesNumber();
    int woman();
    int city_citizens();
    int adults();

    const unordered_map<string, PostalCode> &getPostalCodesMap() const;

    void postalCodes();
};


#endif //LAB4_CITY_H
