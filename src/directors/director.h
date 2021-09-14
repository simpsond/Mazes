//
// Created by Dustin Simpson on 9/6/21.
//

#ifndef MAZE__DIRECTOR_H_
#define MAZE__DIRECTOR_H_

#include <random>
#include "../common.h"
#include "../maze.h"
#include "../builders/maze_builder.h"

class Director {
 public:
  virtual void Construct(Coordinates size);
  ~Director();
 protected:
  Director(MazeBuilder* builder);
  virtual void ConstructFullClosedRooms();
  Coordinates RandomRoom();
  bool FlipCoin();
  bool JoinAdjacentRoom(Coordinates room, Direction dir);

  MazeBuilder* builder_;
  Coordinates size_;

  std::random_device random_device_;
  std::mt19937* rng_;
  std::uniform_int_distribution<>* dist_x_;
  std::uniform_int_distribution<>* dist_y_;
  std::uniform_int_distribution<>* dist_flip_;

};

#endif //MAZE__DIRECTOR_H_
