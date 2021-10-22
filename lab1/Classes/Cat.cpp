#include <iostream>
#include "../Headers/Cat.h"

using namespace std;

Cat::Cat() {
    cout << "Bez arugmentowy konstruktor" << endl;
}

Cat::Cat(int limbNr1, string name1, bool protectedAnimal1): Animal(limbNr1, name1, protectedAnimal1) {

}

void Cat::initMiceCin() {
    for (int i = 0; i < 5; ++i) {
        cout << "Podaj wartosc dla roku " << i << endl;
        cin >> mice[i];
    }
}

void Cat::initMiceAr(int mices[]) {
    for (int i = 0; i < 5; ++i) {
        mice[i] = mices[i];
    }
}

void Cat::initCat(int levelOfMouseHunting1) {
    if(levelOfMouseHunting1 >= 1 && levelOfMouseHunting1 <= 10){
        levelOfMouseHunting = levelOfMouseHunting1;
    }
}

void Cat::setLevelOfMouseHunting(int levelOfMouseHunting1) {
    if(levelOfMouseHunting1 >= 1 && levelOfMouseHunting1 <= 10){
        levelOfMouseHunting = levelOfMouseHunting1;
    }
}

int Cat::getLevelOfMouseHunting() {
    return levelOfMouseHunting;
}

int Cat::getMice(int value) {
    if(value >= 1 && value <= 5){
        return mice[value];
    }
}



void Cat::giveVoice() {
    cout << "Miau miau\n";
}