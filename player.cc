#include <iostream>
#include "player.h"
using namespace std;

player::player() : magic{0}, name{""}, health{20}{}

player::~player(){}

string player::getname(){
        return name;
}

int player::getmagic(){
        return magic;
}

int player::gethealth(){
        return health;
}

void player::setname(string inputname){
        name = inputname;
}

void player::changehealth(string how, int much){
    if (how == "plus"){
        health += much;
    } else {
        health -= much;
    }
}
void player::changemagic(string how, int much){
    if (how == "plus"){
        magic += much;
    } else {
        magic -= much;
    }
}
