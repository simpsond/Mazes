//
// Created by Dustin Simpson on 9/12/21.
//

#ifndef MAZE__BINARY_TREE_DIRECTOR_H_
#define MAZE__BINARY_TREE_DIRECTOR_H_

#include "director.h"
class BinaryTreeDirector: public Director{
 public:
  BinaryTreeDirector(MazeBuilder* builder);
  virtual void Construct(Coordinates size) override;
};

#endif //MAZE__BINARY_TREE_DIRECTOR_H_
