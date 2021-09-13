//
// Created by Dustin Simpson on 9/6/21.
//

#ifndef MAZE__CONSOLE_MAZE_VIEWER_H_
#define MAZE__CONSOLE_MAZE_VIEWER_H_

#include "maze.h"

class ConsoleMazeViewer {
 public:
  ConsoleMazeViewer(Maze *m): maze_(m) {}
  virtual void Render();

 protected:
  Maze* maze_;
};

#endif //MAZE__CONSOLE_MAZE_VIEWER_H_
