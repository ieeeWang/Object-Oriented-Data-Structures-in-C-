/**
 * Simple main to create and solve a game of the Tower of Hanoi puzzle.
 */

#include "Game.h"
#include <iostream>

int main() {
  Game g;

  std::cout << "Initial game state: " << std::endl;
  std::cout << g << std::endl;

  int steps = g.solve();
  std::cout << "steps taken:" << steps << std::endl;

  std::cout << "Final game state: " << std::endl;
  std::cout << g << std::endl;

  return 0;
}