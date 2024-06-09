//
//  colors.hpp
//  Tetris-Game-OOP-C++
//
//  Created by MEDLAO on 09/06/2024.
//

#ifndef colors_hpp
#define colors_hpp

#include <stdio.h>
#include <raylib.h>
#include <vector>

extern const Color darkgrey;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;

std::vector<Color> getCellColors();

#endif /* colors_hpp */
