#include <iostream>
#include <string>
// same as C apparently
int main() {
  std::cout << "please enter your first number: ";
  int x;
  std::cin >> x;
  std::cout << "now enter your second number: ";
  int y;
  std::cin >> y;
  double total;
  std::cout << "your operation? (- + / *): ";
  char nyar;
  std::cin >> nyar;
  if (nyar == '+') {
    total = y + x;
    std::cout << "your total is : " << total;
  } else if (nyar == '-') {
    total = x - y;
    std::cout << "your total is : " << total;
  } else if (nyar == '*') {
    total = x * y;
    std::cout << "your total is : " << total;

  } else if (nyar == '/') {
    if (y != 0) {
      // i added static_cast<double> so that total doesn't give me an int, even
      // if we assigned it as double, we should specify here i guess
      total = static_cast<double>(x) / y;
      std::cout << "your total is : " << total;
    } else {
      std::cout << "this operation is impossible";
    }
  } else {
    std::cout << "no operation included";
  }

  return 0;
}
// fellas it's not like C
// i was trying to export it using ```gcc 1-calc-for-syntax/take1.cpp -o
// take1``` in the terminal turns out you should use ```g++
// 1-calc-for-syntax/take1.cpp -o take1```
