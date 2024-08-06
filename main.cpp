#include "Game.h"
#include <iostream>

using namespace std;

int main(){
    Game game;

    cout << "Initial Game state\n";
    cout << game << endl;
    
    game.solve();
    cout << "Final Game state\n";
    cout << game << endl;
}