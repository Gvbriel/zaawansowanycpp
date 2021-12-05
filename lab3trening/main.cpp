#include <iostream>
#include "MyArray.h"

using namespace std;

template<typename T>
T minimalny(T elements[], int size){
    T min = elements[0];
    for(int i = 0; i < size; i++){
        if(min > elements[i]){
            min = elements[i];
        }
    }
    return min;
}

int main() {
    MyArray<int> ar(5);
    ar.addOne(1);
    ar.addOne(3);
    ar.addOne(2);
    ar.addOne(6);
//    ar.show();
//    cout << endl;
//    ar.sortUp();
//    ar.show();
//    cout << ar.findMax();

//    MyArray<string> tekst(8);
//    tekst.addOne("co");
//    tekst.addOne("jajco");
//    tekst.addOne("danielmacyce");
//    cout << endl << tekst.findMax().length() << endl;
//    tekst.show();
    return 0;
}
