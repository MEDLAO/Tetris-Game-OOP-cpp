//
//  grid.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 08/06/2024.
//

#include <iostream>
#include <raylib.h>
#include "grid.hpp"
#include "colors.hpp"


Grid::Grid()
{
    numRows = 20;
    numColumns = 10;
    cellSize = 30;
    initialize();
    colors = getCellColors();
}

void Grid::initialize()
{
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numColumns; column++) {
            grid[row][column] = 0;
        }
    }
}

void Grid::print()
{
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numColumns; column++) {
            std::cout << grid[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::draw()
{
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numColumns; column++) {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
            
        }
    }
}

bool Grid::isCellOutside(int row, int column)
{
    if (row >= 0 && row < numRows && column >= 0 && column < numColumns) {
        return false;
    }
    return true;
}

bool Grid::isCellEmpty(int row, int column)
{
    if(grid[row][column] == 0)
    {
        return true;
    }
    return false;
}
