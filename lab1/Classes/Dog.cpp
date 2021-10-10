//
// Created by gabri on 08.10.2021.
//

#include <iostream>
#include "../Headers/Dog.h"
#include "../Headers/Animal.h"

using namespace std;

Dog::Dog(string breed1, int levelOfGuideSkills1, int levelOfTrackerSkills1, int limbNr1, string name1, bool protectedAnimal1)
:Animal(limbNr1, name1, protectedAnimal1) {
    breed = breed1;
    levelOfGuideSkills = levelOfGuideSkills1;
    levelOfTrackerSkills = levelOfTrackerSkills1;
    cout << "Konstruktor inicjalizujacy skladowe klasy Dog\n";
}

Dog::Dog(int limbNr1, string name1, bool protectedAnimal1) : Animal(limbNr1, name1, protectedAnimal1) {
    cout << "Konstruktor inicjalizujacy skladowe klasy Animal\n";
}

void Dog::setSkillLevel(int type, int value){
    if(value >= 0 && value <= 10){
        if(type == 1){
            levelOfTrackerSkills = value;
        }else{
            levelOfGuideSkills = value;
        }
    }else{
        cout << "Wrong value given\n";
    }
}

int Dog::getSkillLevel(int type) {
    if(type == 1){
        return levelOfTrackerSkills;
    }else{
        return levelOfGuideSkills;
    }
}

void Dog::giveVoice() {
    cout << "Hau hau!\n";
}