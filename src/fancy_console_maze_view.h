//
// Created by Dustin Simpson on 9/12/21.
//

#ifndef MAZE__FANCY_CONSOLE_MAZE_VIEW_H_
#define MAZE__FANCY_CONSOLE_MAZE_VIEW_H_
#include "console_maze_viewer.h"
#include "maze.h"
class FancyConsoleMazeView: public ConsoleMazeViewer {
 public:
  FancyConsoleMazeView(Maze *m);
  virtual void Render();
};

#endif //MAZE__FANCY_CONSOLE_MAZE_VIEW_H_
