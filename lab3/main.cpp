#include <iostream>
#include "string"
#include "MyArray.h"

using namespace std;

template <typename T>
T find(T tab[], int size){
    T min = tab[0];
    for(int i = 0; i < size; i++){
        if(tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}

int main() {

    MyArray<int> ar(5);
    ar.add(1);
    ar.add(3);
    ar.add(2);
    ar.add(6);
    ar.show();
    cout << endl;
    ar.sortUp();
    ar.show();
    cout << ar.max();

    MyArray<string> tekst(8);
    tekst.add("co");
    tekst.add("jajco");
    tekst.add("danielmacyce");
    cout << endl << tekst.max() << endl;
    tekst.show();
    return 0;
}
