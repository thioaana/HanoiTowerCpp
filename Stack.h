#pragma once
#include "Cube.h"

class Stack{
    private:
        std::vector<Cube> cubes;

    public :
        Stack();
        void push_back(const Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        unsigned size() const;
        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);
};