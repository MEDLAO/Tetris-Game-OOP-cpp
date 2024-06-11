//
//  game.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 11/06/2024.
//

#include "game.hpp"
#include <random>

Game::Game()
{
    grid = Grid();
    blocks = getAllBlocks();
    currentBlock = getRandomBlock();
    nextBlock = getRandomBlock();
}

Block Game::getRandomBlock()
{
    if (blocks.empty()) {
        blocks = getAllBlocks();
    }
    int randomIndex = random() % blocks.size();
    Block block = blocks[randomIndex];
    blocks.erase(blocks.begin() + randomIndex);
    return block;
}

std::vector<Block> Game::getAllBlocks()
{
    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}

void Game::draw()
{
    grid.draw();
    currentBlock.draw();
}

void Game::handleInput()
{
    int keyPressed = GetKeyPressed();
    switch (keyPressed) {
        case KEY_LEFT:
            moveBlockLeft();
            break;
        case KEY_RIGHT:
            moveBlockRight();
            break;
        case KEY_DOWN:
            moveBlockDown();
            break;
    }
}

void Game::moveBlockLeft()
{
    currentBlock.move(0, -1);
    if(isBlockOutside())
    {
        currentBlock.move(0, 1);
    }
}

void Game::moveBlockRight()
{
    currentBlock.move(0, 1);
    if(isBlockOutside())
    {
        currentBlock.move(0, -1);
    }
}

void Game::moveBlockDown()
{
    currentBlock.move(1, 0);
    if(isBlockOutside())
    {
        currentBlock.move(-1, 0);
    }
}

bool Game::isBlockOutside()
{
    std::vector<Position> tiles = currentBlock.getCellPositions();
    for (Position item : tiles) {
        if (grid.isCellOutside(item.row, item.column)) {
            return true;
        }
    }
    return false;
}

