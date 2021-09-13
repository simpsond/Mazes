//
// Created by Dustin Simpson on 9/6/21.
//

#ifndef MAZE__RECURSIVE_BACK_TRACK_DIRECTOR_H_
#define MAZE__RECURSIVE_BACK_TRACK_DIRECTOR_H_

#include "../maze_builder.h"
#include "director.h"

class RecursiveBackTrackDirector : public Director {
 public:
  RecursiveBackTrackDirector(MazeBuilder* builder);
  virtual void Construct(Coordinates size) override;


};

#endif //MAZE__RECURSIVE_BACK_TRACK_DIRECTOR_H_
