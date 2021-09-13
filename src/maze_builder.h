//
// Created by Dustin Simpson on 9/5/21.
//

#ifndef MAZE__MAZE_BUILDER_H_
#define MAZE__MAZE_BUILDER_H_

#include "common.h"
#include "maze.h"

class MazeBuilder {
 public:
  virtual void BuildMaze(Coordinates size){}
  virtual void BuildRoom(Coordinates pos){}
  virtual void BuildDoor(Coordinates r1, Coordinates r2){}

  virtual Maze* GetMaze() {return 0;}

 protected:
  MazeBuilder(){}

};

#endif //MAZE__MAZE_BUILDER_H_
