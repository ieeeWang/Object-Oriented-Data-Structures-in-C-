/**
Object-Oriented Data Structures in C++
 * Week 3 solution
 * @author
 * */

#include "Cube.h"
#include <iostream>

using std::cout;
using std::endl;


Pair::Pair(int a, int b) {
  int *pa =  new int;
  int *pb =  new int;
  *pa =  a;
  *pb =  b;
  cout << "contruct once" << endl;
  cout << *pa << endl;
  cout << "pa:" << pa << endl;
  cout << "&pa:" << &pa << endl;
  // update the attibutes of an object  
  this->pa=pa;
  this->pb=pb;
 }

Pair::Pair(const Pair & obj) {
  cout << "contruct once by copy" << endl;  
  cout << "obj.pa:" << obj.pa << endl;
  int *pa = new int;
  int *pb = new int;
  *pa =  *obj.pa;
  *pb =  *obj.pb;
  // update the attibutes of an object
  this->pa=pa;
  this->pb=pb;
 }
 
Pair::~Pair() {
  cout << "decontruct once" << endl;
} 
