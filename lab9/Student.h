//
// Created by Gabriel Polak on 03/01/2022.
//

#ifndef LAB9_STUDENT_H
#define LAB9_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    string name;
    string surname;
    string email;
    string sex;
    int grade;
    bool isDataValid = true;
public:
    Student();
    void setName(const string &name);
    void setSurname(const string &surname);
    void setEmail(const string &email);
    void setSex(string sex);
    void setGrade(int grade);
    void show();
    string getCSVData();

    int getGrade() const;

    const string &getSex() const;

    const string &getSurname() const;

    bool isDataValid1() const;
};


#endif //LAB9_STUDENT_H
