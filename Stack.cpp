#include "Stack.h"

Stack::Stack(){
    Cube c1(4);
    Cube c2(3);
    Cube c3(2);
    Cube c4(1);
    }

}

void Stack::push_back(const Cube &cube)
{
}

Cube &Stack::peekTop()
{
    // TODO: insert return statement here
}

unsigned Stack::size() const{
    return this.cubes.size();
}
