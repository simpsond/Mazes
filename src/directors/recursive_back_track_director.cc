//
// Created by Dustin Simpson on 9/6/21.
//
#include <vector>
#include "recursive_back_track_director.h"
#include "../wall.h"

RecursiveBackTrackDirector::RecursiveBackTrackDirector(MazeBuilder *builder): Director(builder) {

}

void RecursiveBackTrackDirector::Construct(Coordinates size) {
  size_ = size;
  ConstructFullClosedRooms();

  std::vector<bool> visited(size_.x * size_.y, false);

}

