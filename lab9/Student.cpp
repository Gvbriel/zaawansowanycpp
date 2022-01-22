//
// Created by Gabriel Polak on 03/01/2022.
//


#include "Student.h"
Student::Student() {}

bool checkEmail(string email){
    auto found = find(email.begin(), email.end(), '@');
    return *found;
}

void Student::setName(const string &name) {
    Student::name = name;
}

void Student::setSurname(const string &surname) {
    Student::surname = surname;
}

void Student::setEmail(const string &email) {
    if(checkEmail(email)){
        Student::email = email;
    }else{
        isDataValid = false;
    }
}

void Student::setSex(string sex) {
    if(sex == "K" || sex == "M"){
        Student::sex = sex;
    }else{
        isDataValid = false;
    }
}

void Student::setGrade(int grade) {
    Student::grade = grade;
}

void Student::show() {
    cout << name << " " << surname << " "<< sex << " "<< grade << " "<< email << "\n";
}

bool Student::isDataValid1() const {
    return isDataValid;
}

const string &Student::getSurname() const {
    return surname;
}

const string &Student::getSex() const {
    return sex;
}

string Student::getCSVData() {
    return name + ";" + surname + ";" + sex + ";" + to_string(grade) + ";" + email;
}

int Student::getGrade() const {
    return grade;
}
