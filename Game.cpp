#include "Game.h"
#include <limits.h>

using namespace uiuc;
using namespace std;

Game::Game(){
    for(int i=0; i<3; i++){
        Stack stackOfCubes;
        this->stacks.push_back(stackOfCubes);
    }

    Cube c4(4);
    this->stacks[0].stackPushBack(c4);

    Cube c3(3);
    this->stacks[0].stackPushBack(c3);
    
    Cube c2(2);
    this->stacks[0].stackPushBack(c2);

    Cube c1(1);
    this->stacks[0].stackPushBack(c1);
}

void Game::solve(){
    while (this->stacks[2].stackSize() != 4){
        this->legalMove(0, 1);
        cout << *this << endl;
        
        this->legalMove(0, 2);
        cout << *this << endl;

        this->legalMove(1, 2);
        cout << *this ;
        cout << "----------------" << endl;
    }    
}


void Game::legalMove(int s1, int s2){
    int s1Len, s2Len;
    
    if (this->stacks[s1].stackSize() == 0 ){
        s1Len = INT_MAX;}
    else{
        s1Len = this->stacks[s1].peekTop().getLength();}

    if (this->stacks[s2].stackSize() == 0 ){
        s2Len = INT_MAX;}
    else{
        s2Len = this->stacks[s2].peekTop().getLength();}
    
    if (s1Len < s2Len){
        this->stacks[s2].stackPushBack(this->stacks[s1].removeTop());    }
    else{
        this->stacks[s1].stackPushBack(this->stacks[s2].removeTop());    }
}


std::ostream & operator << (std::ostream & os, Game & g){
    for (int i = 0; i < g.stacks.size(); i++){
        os <<"Stack[" << i+1 << "]: " << g.stacks[i] << endl;
    }
    return os;
}
