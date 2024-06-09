//
//  block.hpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 09/06/2024.
//

#ifndef block_hpp
#define block_hpp

#include <stdio.h>
#include <vector>
#include <map>
#include "position.hpp"
#include "colors.hpp"

class Block
{
public:
    Block();
    void draw();
    int id;
    std::map<int, std::vector<Position>> cells;
    
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
};


#endif /* block_hpp */
