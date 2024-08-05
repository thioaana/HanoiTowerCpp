#include "Game.h"

Game::Game(){
    for(int i; i<3; i++){
        Stack stackOfCubes;
        stacks.push_back(stackOfCubes)
    }
    Cube c4(4);
    stacks[0].push_back(c4);
    
    Cube c3(3);
    stacks[0].push_back(c3);
    
    Cube c2(2);
    stacks[0].push_back(c2);

    Cube c1(1);
    stacks[0].push_back(c1);
}

Game::solve(){
    // cout << stacks << endl;
}

friend std::ostream & operator << (std::ostream & os, Game & g){
    cout << "inside friend func\n";
    out << "Printing from the Game ..."<<endl;
    return out;
}
