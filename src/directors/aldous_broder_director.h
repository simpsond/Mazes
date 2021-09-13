//
// Created by Dustin Simpson on 9/12/21.
//

#ifndef MAZE__ALDOUS_BRODER_DIRECTOR_H_
#define MAZE__ALDOUS_BRODER_DIRECTOR_H_
#include "director.h"
class AldousBroderDirector:public Director  {
 public:
  AldousBroderDirector(MazeBuilder* builder);
  virtual void Construct(Coordinates size) override;

};

#endif //MAZE__ALDOUS_BRODER_DIRECTOR_H_
