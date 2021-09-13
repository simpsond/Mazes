//
// Created by Dustin Simpson on 9/6/21.
//
#include <iostream>
#include <locale.h>
#include "console_maze_viewer.h"
void ConsoleMazeViewer::Render() {
  std::cout << "printing maze" << std::endl;
  Coordinates size = maze_->GetSize();

  std::cout << "+";
  for (unsigned int j = 0; j < size.x; j++) {
    if (!maze_->GetRoom({j, 0})->GetSide(NORTH)->CanEnter()) {
//      printf("---");
      printf("---");
    }
    printf("+");
  }
  printf("\n");
  for (unsigned int i = 0; i < size.y; i++) {
    std::string line1, line2;
    if (!maze_->GetRoom({0, i})->GetSide(WEST)->CanEnter()) {
      line1 = "|";
//      line1 = chars[9];
      line2 = "+";
    }
    for (unsigned int j = 0; j < size.x; j++) {
        line1 = line1 + "   ";
        if (!maze_->GetRoom({j, i})->GetSide(EAST)->CanEnter()) {
          line1 = line1 + "|";
        }
        if (!maze_->GetRoom({j, i})->GetSide(SOUTH)->CanEnter()) {
          line2 = line2 + "---";
        }
        line2+="+";
      }
      std::cout << line1 << std::endl << line2 << std::endl;
  }
}
