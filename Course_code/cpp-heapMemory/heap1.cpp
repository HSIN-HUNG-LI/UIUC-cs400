/**
 * C++ program allocating and free'ing heap memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"
using uiuc::Cube;

int main() {
  int *p = new int;
  Cube *c = new Cube;

  *p = 42;
  std::cout << " p = " << p << "\n *p = " << *p << "\n &p =" << &p << std::endl;
  (*c).setLength(4);

  delete c;  c = nullptr;
  delete p;  p = nullptr;
  return 0;
}
