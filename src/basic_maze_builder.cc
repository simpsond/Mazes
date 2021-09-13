//
// Created by Dustin Simpson on 9/5/21.
//

#include "basic_maze_builder.h"
#include "wall.h"

BasicMazeBuilder::BasicMazeBuilder() {
  maze_ = nullptr;
}

void BasicMazeBuilder::BuildMaze(Coordinates size) {
  size_ = size;
  maze_ = new Maze(size_);

}

void BasicMazeBuilder::BuildRoom(Coordinates pos) {
  Room *room = new Room(pos);
  room->SetSide(NORTH, new Wall);
  room->SetSide(EAST, new Wall);
  room->SetSide(SOUTH, new Wall);
  room->SetSide(WEST, new Wall);
  maze_->AddRoom(pos, room);
}

Maze *BasicMazeBuilder::GetMaze() {
  return maze_;
}

