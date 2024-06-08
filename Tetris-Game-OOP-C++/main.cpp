//
//  main.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 07/06/2024.
//

#include <iostream>
#include "raylib.h"

int main(int argc, const char * argv[]) {
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Raylib Example");
    
    SetTargetFPS(60);
    
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
