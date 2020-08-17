#include <iostream>

#include "pair.h"
#include "sumPair.h"


int main() {
  sumPair sp(15,16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}