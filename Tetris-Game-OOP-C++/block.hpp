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
    void draw(int offsetX, int offsetY);
    void move(int rows, int columns);
    std::vector<Position> getCellPositions();
    void rotate();
    void undoRotation();
    int id;
    std::map<int, std::vector<Position>> cells;
    
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int columnOffset;
};



#endif /* block_hpp */
