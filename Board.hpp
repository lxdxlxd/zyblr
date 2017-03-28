//
//  Board.hpp
//  Sorcery
//
//  Created by 刘然 on 2017-03-27.
//  Copyright © 2017 刘然. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <iostream>
#include <vector>
#include "model.hpp"
using namespace std;

class card;

class Board: public model {
    int amount;
    vector<card> realBoard;
public:
    Board();
    virtual ~Board();
};

#endif /* Board_hpp */
