/**
 * The Modern Range-Based "for" Loop:
 */

#include <vector>
#include <iostream>

int main() {
  std::vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back( i * i );
  }

  for (int i=0; i<10; i++){
    std::cout << v[i] << std::endl;
  }
  
  // The Modern Range-Based "for" Loop:
  // for (temporary variable declaration : container) {loop body}
  for (int x : v) {
    std::cout << "This item has value: " << x << std::endl;
  }

  return 0;
}
