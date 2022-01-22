//
// Created by Gabriel Polak on 10/01/2022.
//

#ifndef LAB11_BUFFER_H
#define LAB11_BUFFER_H
#include <iostream>
using namespace std;

class Buffer {
public:
    virtual void add(int a) = 0;
    virtual void write() = 0;

    virtual ~Buffer();

    Buffer();
};


#endif //LAB11_BUFFER_H
