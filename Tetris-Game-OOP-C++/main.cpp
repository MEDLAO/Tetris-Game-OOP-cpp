//
//  main.cpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 07/06/2024.
//

#include <iostream>
#include <raylib.h>
#include <iostream>
#include "game.hpp"
#include "colors.hpp"


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
    InitWindow(500, 620, "Raylib Tetris");
    SetTargetFPS(60); // 60 frames per second
    
    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
    
    Game game = Game();
    
    while (WindowShouldClose() == false) {
        game.handleInput();
        if (eventTriggered(0.2)) {
            game.moveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);
        if(game.gameOver)
        {
            DrawTextEx(font, "GAME OVER", {320, 450}, 30, 2, WHITE);
        }
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);
        
        char scoreText[10];
        snprintf(scoreText, sizeof(scoreText), "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);
        
        DrawTextEx(font, scoreText, {320 + (170 - textSize.x)/2, 65}, 38, 2, WHITE);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightBlue);
        game.draw();
        EndDrawing();
    }
    
    CloseWindow();
    
}
