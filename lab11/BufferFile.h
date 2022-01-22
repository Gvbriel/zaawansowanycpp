//
// Created by Gabriel Polak on 10/01/2022.
//

#ifndef LAB11_BUFFERFILE_H
#define LAB11_BUFFERFILE_H
#include <iostream>
#include "Buffer.h"
#include <fstream>

using namespace std;

class BufferFile: Buffer {
private:
    string filePath;
    unique_ptr<fstream> *file;
public:
    BufferFile();
    virtual ~BufferFile();

private:
    void add(int a) override;

    void write() override;
};


#endif //LAB11_BUFFERFILE_H
