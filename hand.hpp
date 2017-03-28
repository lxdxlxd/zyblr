//
//  hand.hpp
//  Sorcery
//
//  Created by 刘然 on 2017-03-27.
//  Copyright © 2017 刘然. All rights reserved.
//

#ifndef hand_hpp
#define hand_hpp

#include <iostream>
#include "Board.hpp"

class card;

class hand: public Board {
    int amount;
    vector<card> realhand;
public:
    hand();
    ~hand();
};

#endif /* hand_hpp */
