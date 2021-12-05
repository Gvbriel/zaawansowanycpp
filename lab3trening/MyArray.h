//
// Created by gabri on 03.12.2021.
//

#ifndef LAB3TRENING_MYARRAY_H
#define LAB3TRENING_MYARRAY_H
#include <iostream>
using namespace std;

template<typename T>
class MyArray {
private:
    int size;
    int firstFree;
    T* arr;
public:
    MyArray(int size);
    MyArray();
    virtual ~MyArray();
    void sortUp();
    T findMax();
    void show();
    void addOne(T el);
    T find(int index);

};




template<typename T>
MyArray<T>::MyArray(int size):size(size) {
    arr = new T[size];
    firstFree = 0;

}

template<typename T>
MyArray<T>::MyArray() {
    arr = new T[10];
    size = 10;
    firstFree = 0;
}

template<typename T>
MyArray<T>::~MyArray() {
    delete arr;
}

template<typename T>
void swap(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template<typename T>
void MyArray<T>::sortUp(){
    T i, j;
    for (i = 0; i < size-1; i++)
        for (j = 0; j < size-i-1; j++)
            if (arr[j] > arr[j+1])
                swap<T>(&arr[j], &arr[j+1]);
}

template<typename T>
T MyArray<T>::findMax() {
    T max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

template<typename T>
void MyArray<T>::show() {
    for(int i = 0; i < size; i++){
        cout << arr[i] << " | ";
    }
}

template<typename T>
void MyArray<T>::addOne(T el) {
    arr[size] = el;
    size++;
}

template<typename T>
T MyArray<T>::find(int index) {
    return arr[index];
}

template<typename T>
void swapString(string *xp, string *yp)
{
    string temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template<>
void MyArray<string>::sortUp() {
    int i, j;
    for (i = 0; i < size-1; i++)
        for (j = 0; j < size-i-1; j++)
            if (arr[j].length() > arr[j+1].length())
                swap(&arr[j], &arr[j+1]);
}

template<>
string MyArray<string>::findMax() {
    string max = arr[0];
    for(int i = 0; i < size; i++){
        if(max.length() < arr[i].length())
            max = arr[i];
    }
    return max;
}


#endif //LAB3TRENING_MYARRAY_H
