//
// Created by Dustin Simpson on 9/12/21.
//
#include <iostream>
#include "fancy_console_maze_view.h"
void FancyConsoleMazeView::Render() {
  setlocale(LC_ALL, "");
  std::cout << "printing maze" << std::endl;

  Coordinates size = maze_->GetSize();
//  const char_t chars[] = " ─┌┐└┘├┤┼│";

  std::string line1, line2;
  line1 = "\u250c"; // ┌
  for (unsigned int j = 0; j < size.x; j++) {
    if (!maze_->GetRoom({j, 0})->GetSide(NORTH)->CanEnter()) {
//      printf("---");
//      line1+= "---";
      line1 += "\u2500\u2500\u2500";
    }
    if (j != size.x - 1) {
      line1 += "\u252c";
    }
  }
  line1 += "\u2510"; //
  std::cout << line1 << std::endl;
  for (unsigned int i = 0; i < size.y; i++) {
    if (!maze_->GetRoom({0, i})->GetSide(WEST)->CanEnter()) {
      line1 = "\u2502";
//      line1 = L"│";
      if (i == size.y - 1) {
        line2 = "\u2514"; // └
      } else {
        line2 = "\u251c"; // ├
      }
    }
    for (unsigned int j = 0; j < size.x; j++) {
      line1 = line1 + "   ";
      if (!maze_->GetRoom({j, i})->GetSide(EAST)->CanEnter()) {
        line1 += "\u2502"; // │
      } else {
        line1 += " "; // │
      }
      if (!maze_->GetRoom({j, i})->GetSide(SOUTH)->CanEnter()) {
        line2 += "\u2500\u2500\u2500";
      } else {
        line2 += "   ";
      }
      if (i == size.y - 1) {
        if (j == size.x - 1) {
          line2 += "\u2518"; // ┘
        } else {
          line2 += "\u2534"; // ┴
        }
      } else {
        if (j == size.x - 1) {
          line2 += "\u2524"; // ┤
        } else {
          line2 += "\u253c"; // ┼
        }
      }
    }
    std::cout << line1 << std::endl << line2 << std::endl;
  }
}

FancyConsoleMazeView::FancyConsoleMazeView(Maze *m) : ConsoleMazeViewer(m) {

}
