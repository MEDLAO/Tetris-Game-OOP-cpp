//
//  main.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 07/06/2024.
//

#include <iostream>
#include <raylib.h>
#include "grid.hpp"
#include "blocks.cpp"


int main()
{
    Color darkblue = {44, 44, 127, 255};
    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60); // 60 frames per second
    
    Grid grid = Grid();
    grid.print();
    
    TBlock block = TBlock();
    
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(darkblue);
        grid.draw();
        block.draw();
        EndDrawing();
    }
    
    CloseWindow();
    
}
