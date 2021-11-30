//
// Created by Gabriel Polak on 25/10/2021.
//

#ifndef LAB3_MYARRAY_H
#define LAB3_MYARRAY_H
#include <iostream>
#include "string"

using namespace std;

template<typename T>
class MyArray {
private:
    int size;
    int index;
    T *tab;
public:
    MyArray();
    MyArray(int size1);
    ~MyArray();
    void sortUp();
    T max();
    void show();
    void add(T el);
    T showElement(int index);

};


#endif //LAB3_MYARRAY_H


//
// Created by Gabriel Polak on 25/10/2021.
//

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swapString(string *xp, string *yp)
{
    string temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template<typename T>
MyArray<T>::MyArray() {
    tab = new T[10];
    size = 10;
    index = 0;
}

template<typename T>
MyArray<T>::MyArray(int size1){
    tab = new T[size1];
    size = size1;
    index = 0;
}

template<typename T>
MyArray<T>::~MyArray() {
        delete tab;
}

template<>
string MyArray<string>::max(){
    int len = tab[0].length();
    int indeks = 0;
    for(int i = 0; i < size; i++){
        if(tab[i].length() > len){
            len = tab[i].length();
            indeks = i;
        }
    }
    return tab[indeks];
}

template<>
void MyArray<string>::sortUp() {
    int i, j;
    for (i = 0; i < size-1; i++)
        for (j = 0; j < size-i-1; j++)
            if (tab[j].length() > tab[j+1].length())
                swapString(&tab[j], &tab[j+1]);
}


template<typename T>
T MyArray<T>::max() {
    T max = tab[0];
    for(int i = 0; i < size; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

template<typename T>
void MyArray<T>::sortUp() {
    int i, j;
    for (i = 0; i < size-1; i++)
        for (j = 0; j < size-i-1; j++)
            if (tab[j] > tab[j+1])
                swap(&tab[j], &tab[j+1]);
}

template<typename T>
void MyArray<T>::show(){
    for(int i = 0; i < size; i++){
        cout << tab[i] << " ";
    }
}

template<typename T>
void MyArray<T>::add(T el){
    if(index + 1 <= size){
        tab[index] = el;
        index = index + 1;
    }else{
        cout << "Nie mozna dodac kolejnego elementu!" << endl;
    }
}

template<typename T>
T MyArray<T>::showElement(int index) {
    return tab[index];
}