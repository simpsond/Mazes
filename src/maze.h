//
// Created by Dustin Simpson on 9/5/21.
//

#ifndef MAZE__MAZE_H_
#define MAZE__MAZE_H_

#include <vector>
#include "common.h"
#include "room.h"


class Maze {
 public:
  Maze(Coordinates size);
  Maze(unsigned int width, unsigned int height);

  void AddRoom(Coordinates pos, Room* room);
  Room* GetRoom(Coordinates pos);
  std::vector<Room*> GetRooms();

  Coordinates GetSize();

 private:
  unsigned int GetLinearOffsetFromCoords(unsigned int x, unsigned int y);
  void InitializeRooms();
  unsigned int width_;
  unsigned int height_;
  std::vector<Room*> rooms_;
};

#endif //MAZE__MAZE_H_
