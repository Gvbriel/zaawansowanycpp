#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
#include "Headers/Person.h"
#include "Headers/Teacher.h"
#include "Headers/Student.h"
#include "Headers/Dog.h"
#include "Headers/Cat.h"

using namespace std;

void zad1();
void zad2();
void zad3();
void zad4dog();
void zad5cat();
void howManyCats(Cat *cats[], int len);
int howManyProtectedAnimals(Animal *animals[], int len);
int howManyTrackerDogs(Dog *dogs[], int len);


int main() {
//    zad1();
//    zad2();
//   zad3();
//   zad4dog();
    zad5cat();
}

void zad5cat(){
    Cat *cats[4];
    int ar[5];
    for(int i=0; i<4; i++)
    {
        for(int x = 0; x < 4; x++){
            ar[x] = rand()%(30+1-1)+1;
        }
        cats[i] = new Cat(4, "Daniel", false);
        cats[i]->initMiceAr(ar);
    }

    howManyCats(cats,4);
}

void howManyCats(Cat *cats[], int len){
    int total;
    for(int i = 0; i < len; i++){
        total = 0;
        for(int x = 0; x < 4; x++){
            total += cats[i]->getMice(x);
        }
        cout << "Kot nr " << i+1 << ", w ciagu 5 lat zlapal " << total << " myszy.\n";
    }
}

void zad4dog(){
    int numb1, numb2;
    Dog *dogs[4];
    for(int i=0; i<4; i++)
    {
        numb1 = rand()%(10+1-1)+1;
        numb2 = rand()%(10+1-1)+1;
        dogs[i] = new Dog("mops", numb1, numb2, 4, "Staszek", true);
    }

    int trackers = howManyTrackerDogs(dogs, 4);
    cout << trackers;
}

int howManyTrackerDogs(Dog *dogs[], int len){
    int trackers = 0;
    for(int i=0; i<len; i++)
    {
        cout << "Pies na indeksie " << i << ". Guide: " << dogs[i]->getSkillLevel(1) << ", tracker: " << dogs[i]->getSkillLevel(2) << endl;
        if(dogs[i]->getSkillLevel(1) < dogs[i]->getSkillLevel(2)){
            trackers++;
        }
    }
    return trackers;
}

int howManyProtectedAnimals(Animal *animals[], int len){
    int prot = 0;
    for(int i=0; i<len; i++)
    {
        if(animals[i]->is_protected()){
            prot++;
        }
    }
    return prot;
}

void zad3(){
    int len = 4;
    Animal *animals[4];
    bool protect = true;
    for(int i=0; i<4; i++)
    {
        animals[i] = new Animal(4, "Opos", !protect);
        protect = !protect;
//        cout << animals[i]->is_protected();
    }

    cout << howManyProtectedAnimals(animals, len);
}

void zad2(){
    Dog doggo(3,"Pug",true);
    doggo.giveVoice();
    cout << doggo.getLimbNr();
}

void zad1(){
    Teacher nauczyciel("Andrzej", "Nowak", 18, 12, "Phd");
    Person Andrzej("Andrzej", "Nowak", 18);

    Person p1[3];
    Person *p2;
    Person *p3[3];
    Person **p4;

    for(int i=0; i<3; i++)
    {
        p1[i].init("stachu","jones",10+i);
        cout << p1[i].getAge() << endl;
    }

    p2 = new Person[3];
    for(int i=0; i<3; i++)
    {
        p2[i].init("stachu","jones",20+i);
        cout << p2[i].getAge() << endl;
    }

    for(int i=0; i<3; i++)
    {
        p3[i] = new Person("stachu","jones",30+i);
        cout << p3[i]->getAge() << endl;
    }

    p4 = new Person*[3];
    for(int i=0; i<3; i++)
    {
        p4[i] = new Person("stachu","jones",40+i);
        cout << p4[i]->getAge() << endl;
    }

    int len = 3;

    Student s1[3];
    Student* s2;
    Student* s3[3];
    Student** s4;

    for(int i = 0; i < len; i++){
        s1[i].init("Daniel", "Piszczy", 10+i);
        cout << s1[i].getAge() << endl;
    }

    s2 = new Student[len];
    for(int i = 0; i < len; i++){
        s2[i].init("Daniel", "Piszczy", 20+i);
        cout << s2[i].getAge() << endl;
    }

    for(int i = 0; i < len; i++) {
        s3[i] = new Student("Daniel", "Piszczy", 30+i, "2");
        cout << s3[i]->getAge() << endl;
    }

    s4 = new Student*[3];
    for(int i = 0; i < len; i++) {
        s4[i] = new Student("Daniel", "Piszczy", 40+i, "2");
        cout << s4[i]->getAge() << endl;
    }

    for(int i=0; i<3; i++)
    {
        delete s3[i];
        delete p3[i];
        delete s4[i];
        delete p4[i];
    }
}
