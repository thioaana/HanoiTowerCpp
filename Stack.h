#pragma once
#include "Cube.h"
#include <vector>
#include <iostream>

using namespace uiuc;

class Stack{
    private:
        std::vector<Cube> cubes;

    public :
        void stackPushBack(const Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        unsigned stackSize() const;
        friend std::ostream& operator << (std::ostream & os, const Stack & stack);
};