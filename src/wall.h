//
// Created by Dustin Simpson on 9/6/21.
//

#ifndef MAZE__WALL_H_
#define MAZE__WALL_H_

#include "map_site.h"

class Wall:public MapSite {
 public:
  Wall();

  virtual void Enter();
  virtual bool CanEnter();
};

#endif //MAZE__WALL_H_
