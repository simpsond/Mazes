#include <iostream>

//#include "recursive_back_track_director.h"
//#include "aldous_broder_director.h"
#include "directors/binary_tree_director.h"
#include "basic_maze_builder.h"
#include "fancy_console_maze_view.h"
#include "console_maze_viewer.h"

int main() {
  std::cout << "Maze Game" << std::endl;

  BasicMazeBuilder builder;
  BinaryTreeDirector director(&builder);
  director.Construct({20, 20});

  Maze* maze = builder.GetMaze();

  FancyConsoleMazeView viewer(maze);
//  ConsoleMazeViewer viewer(maze);
  viewer.Render();

  return 0;
}
