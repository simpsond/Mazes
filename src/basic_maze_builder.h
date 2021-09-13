//
// Created by Dustin Simpson on 9/5/21.
//

#ifndef MAZE__BASIC_MAZE_BUILDER_H_
#define MAZE__BASIC_MAZE_BUILDER_H_

#include "maze.h"
#include "maze_builder.h"

class BasicMazeBuilder : public MazeBuilder  {
 public:
  BasicMazeBuilder();
  virtual void BuildMaze(Coordinates size);
  virtual void BuildRoom(Coordinates pos);

  virtual Maze* GetMaze();

 private:
  Maze* maze_;
  Coordinates size_;

};

#endif //MAZE__BASIC_MAZE_BUILDER_H_
