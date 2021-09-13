//
// Created by Dustin Simpson on 9/6/21.
//

#include "common.h"

std::random_device rd;
std::mt19937 gen(rd());

Coordinates RandomCoord(Coordinates size) {
  std::uniform_int_distribution<> distrib_x(0, size.x);
  std::uniform_int_distribution<> distrib_y(0, size.y);

  return {(unsigned int) distrib_x(gen), (unsigned int) distrib_y(gen)};
}
