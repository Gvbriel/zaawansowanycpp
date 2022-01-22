//
// Created by Gabriel Polak on 03/01/2022.
//

#include "StudentFile.h"

StudentFile::StudentFile() {}

auto getString(string dane){
    return dane.substr(0, dane.find(';'));
}

void StudentFile::addStudent(string dane){
    Student student;

    string imie = getString(dane);
    student.setName(imie);
    dane.erase(0, imie.length()+1);

    string nazwisko = getString(dane);
    student.setSurname(nazwisko);
    dane.erase(0,nazwisko.length()+1);

    string plec = getString(dane);
    student.setSex(plec);
    dane.erase(0, plec.length()+1);

    auto ocena = atoi(getString(dane).c_str());
    student.setGrade(ocena);
    dane.erase(0, 2);

    string mail = getString(dane);
    student.setEmail(mail);

    if(student.isDataValid1()){
        students.push_back(student);
    }
}

void StudentFile::showStudents() {
    for_each(columns.begin(), columns.end(), [](string s){
        cout << s << " ";
    });
    cout << endl;
    for_each(students.begin(), students.end(), [](Student s){
        s.show();
    });
}

void StudentFile::findBySurname(string surname){
    cout << "\nDla nazwiska: " << surname << endl;
    bool found = false;
    for_each(students.begin(), students.end(), [surname, &found](Student s){
        if(s.getSurname() == surname){
            s.show();
            found = true;
        }
    });
    if(!found){
        cout << "Brak wynikow." << endl;
    }
}

void StudentFile::setRawCols(const string &rawCols) {
    StudentFile::rawCols = rawCols;
}

void StudentFile::saveMenCSV() {
    saveCSVData('M');
}

void StudentFile::saveWomenCSV() {
    saveCSVData('K');
}

void StudentFile::saveCSVData(char sex){
    vector<Student> studenci;
    string sexChosen;
    if(sex == 'k' || sex == 'K'){
        sexChosen = "K";
    }else if(sex == 'm' || sex == 'M'){
        sexChosen = "M";
    }

    if(sexChosen == "M" || sexChosen == "K"){
        for_each(students.begin(), students.end(), [&studenci, sexChosen](Student s){
            if(s.getSex() == sexChosen){
                studenci.push_back(s);
            }
        });

        ofstream file;
        string filename = sexChosen + ".csv";
        file.open(filename);
        if(file.is_open()){
            for_each(studenci.begin(), studenci.end(), [&file](Student s){
                file << s.getCSVData();
            });
        }
        file.close();
    }
}


void show(vector<Student> students, int amount){
    cout << "Wyswietlanie " << amount << " studentow...\n";
    for(int i = 0; i < amount; i++){
        students[i].show();
    }
}

void StudentFile::showStudents(int amount) {
    if(amount > 0){
        if(amount > students.size()){
            cout << "Jest tylko " << students.size() << " studentow.\n";
            show(students, students.size());
        }else{
            show(students, amount);
        }
    }else{
        cout << "Nie mozna wyswietlic ujemnej ilosci studentow\n";
    }
}

void StudentFile::sortStudentsByGrade() {
    sort(students.begin(), students.end(), [](Student s1, Student s2){
        return s1.getGrade() < s2.getGrade();
    });
}


