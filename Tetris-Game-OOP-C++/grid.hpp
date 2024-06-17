//
//  grid.hpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 08/06/2024.
//

#ifndef grid_hpp
#define grid_hpp

#include <stdio.h>
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void initialize();
    void print();
    void draw();
    bool isCellOutside(int row, int column);
    bool isCellEmpty(int row, int column);
    int grid[20][10];
private:
    int numRows;
    int numColumns;
    int cellSize;
    std:: vector<Color> colors;
};

#endif /* grid_hpp */
