#ifndef LAB1_ANIMAL_H
#define LAB1_ANIMAL_H

#include <iostream>
using namespace std;

class Animal{
private:
    int limbNr;
    string name;
    bool protectedAnimal = true;
public:
    Animal();
    Animal(int limbNr1, string name1, bool protectedAnimal1);
    void setLimbNr(int limb);
    void setName(string name1);
    void setProtected(bool protectedAnimal1);
    int getLimbNr();;
    string getName();
    bool is_protected();

    void giveVoice();
};

#endif //LAB1_ANIMAL_H
