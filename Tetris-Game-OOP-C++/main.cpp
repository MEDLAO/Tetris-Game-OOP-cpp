//
//  main.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 07/06/2024.
//

#include <iostream>
#include <raylib.h>
#include "game.hpp"


int main()
{
    Color darkblue = {44, 44, 127, 255};
    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60); // 60 frames per second
    
    Game game = Game();
    
    while (WindowShouldClose() == false) {
        game.handleInput();
        BeginDrawing();
        ClearBackground(darkblue);
        game.draw();
        EndDrawing();
    }
    
    CloseWindow();
    
}
