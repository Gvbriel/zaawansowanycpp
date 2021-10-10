#ifndef LAB1_CAT_H
#define LAB1_CAT_H
#include <iostream>
#include "./Animal.h"
using namespace std;

class Cat: public Animal{
private:
    int levelOfMouseHunting;
    int mice[5];
public:
    Cat(int limbNr1, string name1, bool protectedAnimal1);
    void initCat(int levelOfMouseHunting1);
    void initMiceCin();
    void initMiceAr(int mices[]);
    void setLevelOfMouseHunting(int levelOfMouseHunting1);
    int getLevelOfMouseHunting();
    int getMice(int value);
    void giveVoice();
};

#endif //LAB1_CAT_H
