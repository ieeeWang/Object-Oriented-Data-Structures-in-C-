/**
Object-Oriented Data Structures in C++
 * Week 3 solution
 * @author
 *  lwang
 * A class called Pair has already been declared, 
 * but the constructors have not been implemented yet. 
 */

#include "Cube.h"
#include <iostream>

 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  std::cout << "q.pa:" << q.pa << std::endl;
  std::cout << "*q.pa:" << *(q.pa) << std::endl;
  std::cout << "*q.pb:" << *(q.pb) << std::endl;
  Pair *hp = new Pair(23,42);
  delete hp;
  
  return 0;
}