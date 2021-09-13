//
// Created by Dustin Simpson on 9/6/21.
//

#include <iostream>
#include "wall.h"
Wall::Wall() {

}

void Wall::Enter() {
  std::cout << "That HURT!" << std::endl;
}

bool Wall::CanEnter() {
  return false;
}
