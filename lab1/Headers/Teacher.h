//
// Created by gabri on 06.10.2021.
//

#ifndef LAB1_TEACHER_H
#define LAB1_TEACHER_H
#include "Person.h"

class Teacher: public Person{
private:
    int experience;
    string title;
public:
    Teacher(string name1, string surename1, int age1, int experience1, string title1);
    Teacher();
    void setTitle(string title1);
    int getExperience();
    bool is_Phd();
    void showInfoTeacher();

};

#endif //LAB1_TEACHER_H
