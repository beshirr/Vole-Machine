#pragma once

#include <iostream>

using namespace std;

class Memory{
private:
    string memory[256];
    int size = 256;

public:
    string getCell(int address);
    void setCell(int address, string value);
};
