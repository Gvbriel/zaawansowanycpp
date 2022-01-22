//
// Created by Gabriel Polak on 03/01/2022.
//

#ifndef LAB9_STUDENTFILE_H
#define LAB9_STUDENTFILE_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Student.h"
using namespace std;

class StudentFile {
private:
    vector<Student> students;
    vector<string> columns = {"Imie", "Nazwisko", "Plec", "Ocena", "E-mail"};
    string rawCols;
public:
    StudentFile();
    void showStudents();
    void addStudent(string dane);
    void findBySurname(string surname);
    void setRawCols(const string &rawCols);
    void saveWomenCSV();
    void saveMenCSV();
    void saveCSVData(char sex);
    void showStudents(int amount);
    void sortStudentsByGrade();
};


#endif //LAB9_STUDENTFILE_H
