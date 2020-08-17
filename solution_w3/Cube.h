/**
Object-Oriented Data Structures in C++
 * Week 3 solution
 * @author
 * */

#pragma once

class Pair {
  public:
    int *pa,*pb;
    Pair(int , int ); // it is okay without a name here
    Pair(const Pair & );
    ~Pair();
};