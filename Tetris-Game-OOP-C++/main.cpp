//
//  main.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 07/06/2024.
//

#include <iostream>
#include <raylib.h>
#include "game.hpp"


double lastUpdateTime = 0;

double eventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval) {
        
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    Color darkblue = {44, 44, 127, 255};
    InitWindow(500, 620, "Raylib Tetris");
    SetTargetFPS(60); // 60 frames per second
    
    Game game = Game();
    
    while (WindowShouldClose() == false) {
        game.handleInput();
        if (eventTriggered(0.2)) {
            game.moveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkblue);
        game.draw();
        EndDrawing();
    }
    
    CloseWindow();
    
}
