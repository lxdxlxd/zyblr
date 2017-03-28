//
//  Board.cpp
//  Sorcery
//
//  Created by 刘然 on 2017-03-27.
//  Copyright © 2017 刘然. All rights reserved.
//

#include "Board.hpp"

Board::Board():amount{0}{}

Board::~Board(){
    realBoard.clear();
}

