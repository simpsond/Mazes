//
// Created by Dustin Simpson on 9/5/21.
//
#include <iostream>
#include "room.h"
void Room::Enter() {
  std::cout << "Welcome to Room " << std::endl;
}

Room::Room(Coordinates location) {
  location_ = location;
}

MapSite *Room::GetSide(Direction dir) {
  auto search = sides_.find(dir);
  if(search != sides_.end()) {
    return sides_[dir];
  } else {
    return nullptr;
  }
}

void Room::SetSide(Direction dir, MapSite * site) {
  sides_[dir] = site;
}
bool Room::CanEnter() {
  return true;
}

Coordinates Room::GetLocation() {
  return location_;
}
