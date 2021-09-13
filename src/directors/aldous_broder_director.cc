//
// Created by Dustin Simpson on 9/12/21.
//

#include "aldous_broder_director.h"
AldousBroderDirector::AldousBroderDirector(MazeBuilder *builder) : Director(builder) {

}
void AldousBroderDirector::Construct(Coordinates size) {
  Director::Construct(size);
  ConstructFullClosedRooms();

}
