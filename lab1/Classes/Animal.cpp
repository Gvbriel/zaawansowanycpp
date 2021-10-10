#include <iostream>
#include "../Headers/Animal.h"
using namespace std;

Animal::Animal(){
    cout << "Bez argumentowy konstruktor animal" << endl;
}

Animal::Animal(int limbNr1, string name1, bool protectedAnimal1) {
    limbNr = limbNr1;
    name = name1;
    protectedAnimal = protectedAnimal1;
}

void Animal::setLimbNr(int limb) {
    limbNr = limb;
}

void Animal::setName(string name1) {
    name = name1;
}

void Animal::setProtected(bool protectedAnimal1) {
    protectedAnimal = protectedAnimal1;
}

int Animal::getLimbNr() {
    return limbNr;
}

string Animal::getName() {
    return name;
}

bool Animal::is_protected() {
    return protectedAnimal;
}

void Animal::giveVoice() {
    cout << "Chrum, miau, hau, piiiii\n";
}

