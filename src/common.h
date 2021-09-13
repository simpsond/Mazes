//
// Created by Dustin Simpson on 9/5/21.
//


#ifndef MAZE__COMMON_H_
#define MAZE__COMMON_H_

#include <random>

enum Direction {NORTH, EAST, SOUTH, WEST};
typedef struct coord {unsigned int x; unsigned int y;} Coordinates;

Coordinates RandomCoord(Coordinates size);

#endif //MAZE__COMMON_H_
