#pragma once

#include <iostream>
#include <vector>
#include "Stack.h"

class Game{
    private:
        std::vector<Stack> stacks;
        void legalMove(int s1, int s2);

    public:
        Game();
        void solve();
        friend std::ostream & operator << (std::ostream & os, Game & g);
};