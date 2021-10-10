//
// Created by gabri on 06.10.2021.
//

#ifndef LAB1_PERSON_H
#define LAB1_PERSON_H
#include <iostream>

using namespace std;

class Person{
private:
    string name;
    string surname;
    int age;
public:
    Person(string name1, string surname1, int age1);
    Person();
    void init(string name1, string surname1, int age1);
    void setAge(int age1);
    int getAge();
    string getSurname();
    bool is_18();
    void showInfoPerson();
};

#endif //LAB1_PERSON_H
