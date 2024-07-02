//
//  game.hpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 11/06/2024.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "grid.hpp"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Block getRandomBlock();
    std::vector<Block> getAllBlocks();
    void draw();
    void handleInput();
    void moveBlockLeft();
    void moveBlockRight();
    void moveBlockDown();
    Grid grid;
    bool gameOver;
    int score;
    
private:
    bool isBlockOutside();
    void rotateBlock();
    void lockBlock();
    bool blockFits();
    void reset();
    void updateScore(int linesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};

#endif /* game_hpp */
