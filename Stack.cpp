#include "Stack.h"

using namespace uiuc;
using namespace std;

void Stack::stackPushBack(const Cube &cube){
    this->cubes.push_back(cube);
}

Cube Stack::removeTop(){
    Cube c = this->peekTop();
    this->cubes.pop_back();
    return c;
}

Cube &Stack::peekTop(){
    return this->cubes.back();
}

unsigned Stack::stackSize() const {
    return this->cubes.size();
}

std::ostream &operator<<(std::ostream & os, const Stack & stack){
    for (int i=0; i<stack.cubes.size(); i++){
        os << stack.cubes[i].getLength() << " ";
    }
    return os;
}
