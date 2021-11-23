#include <iostream>
#include <random>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Developer.h"
#include "TeamLeader.h"
#include "MaxBufor.h"

using namespace std;

void listing11(){
    Figure *sq = new Square(2);
    Figure *cr = new Circle(6);
    sq->calculateArea();
    sq->show();

    cr->calculateArea();
    cr->show();
    delete sq;
    delete cr;
}

void listing12(){
    Figure *f;
    Circle circle(4);
    f = &circle;
    f->calculateArea();
    f->show();
}


void whoWorkMoreThan5Years(Employee **emp, int size, char *surnames){
    for(int i = 0; i < size; i++){
        if(emp[i]->getExperience() > 5){
            cout << "Pracownik o id " << i << " oraz nazwisku " << surnames[i] << " pracuje " << emp[i]->getExperience() << " lat\n";
        }
    }
}

void pol1(){
    const char *surnames[] = {"Polak", "Piszcz", "Es", "Rak", "Sus", "Piwo", "Stachu"};
    Employee** emp;
    emp = new Employee*[7];
    int age, exp;
    float salary;
    for(int i = 0; i < 7; i++){
        age = (rand() % 60) + 20;
        exp = 3 + (rand() % 5);
        salary = (rand() % 6000) + 2500;
        emp[i] = new Developer(surnames[i], age, exp, salary);
    }

    whoWorkMoreThan5Years(emp, 7, (char *) &surnames);
}

void howManyEarnLessThanMean(Employee **emp, int size){
    float total = 0, av = 0;
    int under = 0;
    for(int i = 0; i < size; i++){
        total += emp[i]->getSalary();
    }
    av = total / size;
    for(int i = 0; i < size; i++){
        if(emp[i]->getSalary() < av){
            under++;
            }
        }
    cout << "Mniej niz srednia zarabia " << under << " pracownikow.\n";
    }

void pol2(){
    const char *surnames[] = {"Polak", "Piszcz", "Gej", "Rak", "Sus", "Piwo", "Stachu"};
    Employee** emp;
    emp = new Employee*[7];
    int age, exp;
    float salary;
    for(int i = 0; i < 7; i++){
        age = (rand() % 60) + 20;
        exp = 3 + (rand() % 5);
        salary = (rand() % 6000) + 2500;
        emp[i] = new Developer(surnames[i], age, exp, salary);
    }

    howManyEarnLessThanMean(emp, 7);
}


int main() {
    Bufor *bf = new MaxBufor();
    bf->showAr();
    for(int i = 0; i < 12; i++){
        bf->add(i);
    }
    cout << endl;
    bf->showAr();

    return 0;
}
