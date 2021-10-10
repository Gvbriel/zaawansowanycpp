//
// Created by gabri on 08.10.2021.
//

#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H
#include <iostream>
#include "./Person.h"

class Student: public Person{
private:
    string index;
public:
    Student(string name1, string surname1, int age1, string index1);
    Student();
    void setIndex(int newIndex);
    string getIndex();
    void showInfoStudent();
};

#endif //LAB1_STUDENT_H
