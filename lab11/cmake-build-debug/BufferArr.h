//
// Created by Gabriel Polak on 10/01/2022.
//

#ifndef LAB11_BUFFERARR_H
#define LAB11_BUFFERARR_H


#include "../Buffer.h"
#include <iostream>

using namespace std;

class BufferArr: Buffer {
private:
    unique_ptr<int[]> tab;
    int lastFree = 0;
    int sizeArr;
public:
    BufferArr(int size);
    virtual ~BufferArr();
    int getLastFree() const;
    void setLastFree(int lastFree);
    int getSizeArr() const;
    void setSizeArr(int sizeArr);
    void add(int a) override;
    void write() override;

};


#endif //LAB11_BUFFERARR_H
