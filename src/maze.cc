//
// Created by Dustin Simpson on 9/5/21.
//

#include "maze.h"
Maze::Maze(unsigned int width, unsigned int height) {
  Maze(Coordinates{width, height});
}

void Maze::AddRoom(Coordinates pos, Room* room) {
  rooms_[GetLinearOffsetFromCoords(pos.x, pos.y)] = room;
}

Room *Maze::GetRoom(Coordinates pos) {
  return rooms_[GetLinearOffsetFromCoords(pos.x, pos.y)];
}

unsigned int Maze::GetLinearOffsetFromCoords(unsigned int x, unsigned int y) {
  return (width_ * y) + x;
}

Maze::Maze(Coordinates size) {
  width_ = size.x;
  height_ = size.y;
  InitializeRooms();
}

void Maze::InitializeRooms() {
  rooms_.resize(width_ * height_);
}
Coordinates Maze::GetSize() {
  return {width_, height_};
}

std::vector<Room *> Maze::GetRooms() {
  return rooms_;
}
