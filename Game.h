#pragma once

#include <iostream>
#include <vector>
#include "Stack.h"

class Game{
    private:
        std::vector<Stack> stacks;

    public:
        Game();
        void solve();
        friend std::ostream & operator << (std::ostream & out, Game & g);
};