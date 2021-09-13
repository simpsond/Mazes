//
// Created by Dustin Simpson on 9/6/21.
//

#ifndef MAZE__MAP_SITE_H_
#define MAZE__MAP_SITE_H_

class MapSite {
 public:
  virtual void Enter() = 0;
  virtual bool CanEnter() = 0;

};

#endif //MAZE__MAP_SITE_H_
