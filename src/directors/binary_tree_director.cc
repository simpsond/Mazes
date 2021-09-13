//
// Created by Dustin Simpson on 9/12/21.
//
#include "../common.h"
#include "binary_tree_director.h"
#include <iostream>
#include <algorithm>
BinaryTreeDirector::BinaryTreeDirector(MazeBuilder *builder) : Director(builder) {

}

void BinaryTreeDirector::Construct(Coordinates size) {
  Director::Construct(size);
  ConstructFullClosedRooms();

  Maze* maze = builder_->GetMaze();

  auto rooms = maze->GetRooms();
  std::shuffle(rooms.begin(), rooms.end(), *rng_);

  for(auto room: rooms) {
    if(room->GetLocation().y == 0 && room->GetLocation().x == size.x - 1) {
      continue;
    }

    bool coin_flip_result = false;
    if(room->GetLocation().x == size.x - 1) {
      coin_flip_result = true;
    } else {
      if(room->GetLocation().y != 0) {
        coin_flip_result = FlipCoin();
      }
    }

    if (coin_flip_result) {
      room->SetSide(NORTH, maze->GetRoom({room->GetLocation().x, room->GetLocation().y - 1}));
      maze->GetRoom({room->GetLocation().x, room->GetLocation().y - 1})->SetSide(SOUTH, room);
    } else {
      room->SetSide(EAST, maze->GetRoom({room->GetLocation().x + 1, room->GetLocation().y}));
      maze->GetRoom({room->GetLocation().x + 1, room->GetLocation().y})->SetSide(WEST, room);
    }
  }
}
