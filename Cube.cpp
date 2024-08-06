#include "Cube.h"

using namespace uiuc;

Cube::Cube(double l){
    this->length = l;
}

double Cube::getLength() const{
    return this->length;
}
