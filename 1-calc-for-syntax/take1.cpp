#include <iostream>
#include <string>

namespace burgers {
int x = 12;
}
namespace hotdogs {
int x = 16;
}
// same as C apparently
int main() {
  std::cout << burgers::x << "\n";
  std::cout << hotdogs::x;

  return 0;
}
// fellas it's not like C
// i was trying to export it using ```gcc 1-calc-for-syntax/take1.cpp -o
// take1``` in the terminal turns out you should use ```g++
// 1-calc-for-syntax/take1.cpp -o take1```
