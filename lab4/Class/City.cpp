//
// Created by gabri on 26.11.2021.
//

#include "../Headers/City.h"
#include "../Headers/PostalCode.h"
#include <algorithm>
#include <deque>
#include <unordered_map>
#include <string>

City::City(const string &cityName) : city_name(cityName) {}

void City::addCitizen(Citizen &citizen){
    citizens.push_back(citizen);
}

void City::deleteCitizen(string surname, int age){
    auto itr = find_if(citizens.begin(), citizens.end(), [surname, age](Citizen citizen) {
        return (citizen.getSurname() == surname && citizen.getAge() == age);
    });

    citizens.erase(itr);
}

void City::setCitizens(const vector<Citizen> &citizens) {
    City::citizens = citizens;
}

void City::showCitizens() {
    for_each(citizens.begin(), citizens.end(), [](Citizen citizen){
        citizen.show();
    });
}

void City::showCity() {
    cout << city_name << endl;
}

int City::woman() {
    int num = 0;
    for_each(citizens.begin(), citizens.end(), [&num](const Citizen& citizen){
        if(citizen.getSex() == 'F')
            num++;
    });
    return num;
}

int City::city_citizens(){
    return citizens.size();
}

int City::adults() {
    int num = 0;
    for_each(citizens.begin(), citizens.end(), [&num](const Citizen& citizen){
        if(citizen.getAge() >= 18)
            num++;
    });
    return num;
}

void City::postalCodes() {

    setPostalCodesMap();

    for(auto& code: PostalCodesMap){
        cout << code.second.getCode() << " -> posiada mieszkancow " << code.second.getCitizens() << endl;
    }
}

void City::setPostalCodesMap() {
    for (int i = 0; i < city_citizens(); i++) {
        string code = citizens[i].getPostalCode();
        if(PostalCodesMap.empty()){
            PostalCodesMap.insert({code, PostalCode(code)});
        }else{
            if(PostalCodesMap.find(code) != PostalCodesMap.end()){
                PostalCodesMap.find(code)->second.incrementCitizens();
            }else{
                PostalCodesMap.insert({code, PostalCode(code)});
            }
        }
    }
}

int City::getPostalCodesNumber(){
    setPostalCodesMap();
    return getPostalCodesMap().size();
}

const unordered_map<string, PostalCode> &City::getPostalCodesMap() const {
    return PostalCodesMap;
}

const string &City::getCityName() const {
    return city_name;
};

