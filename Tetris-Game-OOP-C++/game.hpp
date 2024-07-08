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
    ~Game();
    void draw();
    void handleInput();
    void moveBlockDown();
    bool gameOver;
    int score;
    Music music;
    
private:
    Block getRandomBlock();
    std::vector<Block> getAllBlocks();
    void moveBlockLeft();
    void moveBlockRight();
    bool isBlockOutside();
    void rotateBlock();
    void lockBlock();
    bool blockFits();
    void reset();
    void updateScore(int linesCleared, int moveDownPoints);
    Grid grid;
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Sound rotateSound;
    Sound clearSound;
};

#endif /* game_hpp */
