//
// Created by gabri on 08.10.2021.
//

#ifndef LAB1_DOG_H
#define LAB1_DOG_H
#include <iostream>
#include "./Animal.h"

class Dog: public Animal{
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog();
    Dog(string breed1, int levelOfGuideSkills1, int levelOfTrackerSkills1, int limbNr1, string name1, bool protectedAnimal1);
    Dog(int limbNr1, string name1, bool protectedAnimal1);
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
};

#endif //LAB1_DOG_H
