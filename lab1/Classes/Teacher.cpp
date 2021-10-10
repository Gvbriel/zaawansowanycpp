//
// Created by gabri on 06.10.2021.
//
#include "../Headers/Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string name1, string surname1, int age1, int experience1, string title1): Person(name1, surname1, age1) {
    experience = experience1;
    title=title1;
    cout << "Konstruktor klasy pochodnej Teacher\n";
}

Teacher::Teacher() {
    cout << "Konstruktor bez arg klasy pochodnej Teacher\n";
}

void Teacher::setTitle(string title1) {
    title = title1;
}

int Teacher::getExperience() {
    return experience;
}

bool Teacher::is_Phd() {
    if(title=="Phd")
        return true;
    else
        return false;
}