//
// Created by Dustin Simpson on 9/6/21.
//

#include "director.h"
void Director::ConstructFullClosedRooms() {
  builder_->BuildMaze(size_);
  for (unsigned int i = 0; i < size_.x; i++) {
    for (unsigned int j = 0; j < size_.y; j++) {
      builder_->BuildRoom({i, j});
    }
  }
}
Director::Director(MazeBuilder *builder):builder_(builder) {

}
void Director::Construct(Coordinates size) {
  size_ = size;
  rng_ = new std::mt19937(random_device_());
  dist_x_ = new std::uniform_int_distribution<>(0, size_.x - 1);
  dist_y_ = new std::uniform_int_distribution<>(0, size_.y - 1);
  dist_flip_ = new std::uniform_int_distribution<>(0, 1);
}

Coordinates Director::RandomRoom() {
  return {(unsigned int)(*dist_x_)(*rng_), (unsigned int)(*dist_y_)(*rng_)};
}

Director::~Director() {
  delete rng_;
  delete dist_x_;
  delete dist_y_;
  delete dist_flip_;
}

bool Director::FlipCoin() {
  if((*dist_flip_)(*rng_) == 0) {
    return false;
  }
    return true;
}

bool Director::JoinAdjacentRoom(Coordinates room, Direction dir) {
  Maze* maze = builder_->GetMaze();

  if(room.y == 0 && dir == NORTH) {
    return false;
  }
  if(room.x == maze->GetSize().x - 1 && dir == EAST) {
    return false;
  }
  if(room.y == maze->GetSize().y -1 && dir == SOUTH) {
    return false;
  }
  if(room.x == 0 && dir == WEST) {
    return false;
  }

  maze->GetRoom(room)->SetSide(NORTH, maze->GetRoom({room.x, room.y - 1}));
  maze->GetRoom({room.x, room.y - 1})->SetSide(SOUTH, maze->GetRoom(room));

  return true;
}
