//
// Created by Dustin Simpson on 9/5/21.
//

#ifndef MAZE__ROOM_H_
#define MAZE__ROOM_H_
#include "map_site.h"
#include "common.h"
#include <map>

class Room : public MapSite {
 public:
  Room(Coordinates location);

  MapSite* GetSide(Direction);
  void SetSide(Direction, MapSite*);
  Coordinates GetLocation();
  virtual void Enter();
  virtual bool CanEnter();

 private:
  std::map<Direction, MapSite*> sides_;
  Coordinates location_;
//  MapSite* sides_[4];
//  int room_number_;
};

#endif //MAZE__ROOM_H_
