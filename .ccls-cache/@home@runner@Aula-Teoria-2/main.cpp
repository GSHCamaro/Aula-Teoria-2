#include <iostream>
using namespace std;

namespace coords1{
  int x=1;
  int y=2;
}

namespace coords2{
  int x=3;
  int y=4;
  int z = 6;
}

int main() {
  int z = 7;
  // int x = 0;
  // int y = 0;
  std::cout << "x = " << coords1::x << std::endl;
  std::cout << "y = " << coords2::y << std::endl;
  std::cout << "z = " << z << endl;
  // cout << "coords1::x = " << coords1::x << endl;
  // cout << "coords1::x = " << coords1::y << endl;
}