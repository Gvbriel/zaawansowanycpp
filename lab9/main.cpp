#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <regex>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Student.h"
#include "StudentFile.h"
using namespace std;

void studenci(){
    StudentFile kartoteka;
    int lineCount = 1;
    fstream file;
    file.open("dane.csv");

    string l, columns;
    if(file.is_open()){
        cout << "Otwarto plik...\n";
        while(!file.eof()){
            if(lineCount == 1){
                getline(file,columns);
                stringstream ss(columns);
                kartoteka.setRawCols(ss.str());
                lineCount++;
                continue;
            }
            getline(file, l);
            stringstream ss(l);
            if(ss.str() == ""){
                break;
            }
            kartoteka.addStudent(ss.str());
            lineCount++;
        }
    }else{
        throw string("Brak pliku o podanej nazwie");
    }
//    kartoteka.showStudents();
//    kartoteka.saveMenCSV();
    kartoteka.findBySurname("Mazur");
    kartoteka.sortStudentsByGrade();
    kartoteka.showStudents();
}

void kod(){
    fstream file;
    file.open("kod.txt");
    //fileOf.open("./kod.txt");
    string l;
    if(file.is_open()){
        cout << "Otwarto" << endl;
        while (!file.eof()){
            getline(file, l);
            if(l.find("//") != string::npos){
                l.erase(l.find("//"), l.length()-1);
            }
            cout << l << endl;
        }
    }
    file.close();
}

int main() {
    try{
        studenci();
    }
    catch(string e1){
        cout << e1 << endl;
    }
    return 0;
}
