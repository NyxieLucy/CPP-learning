for file exportation u use

`g++` instead of `gcc` for C

# variable declaration

declare the type of the variable, folowed by the value

to print it out use ``cout << the_variable << std::endl

fellas we can merge types as long as we specify the result type, try:

```
#include <iostream>
#include <string>
int main() {
  int number1 = 1;
  int number2 = 2;
  int total = number1 + number2;
  double number_fraction = 1.5;
  double total_with_double = number_fraction + number2;
  std::cout << number1 << "\n";
  std::cout << total;
  std::cout << total_with_double;
  return 0;
}
```

also fellas, namespaces allows you to declare different values to the same variable, example:
```
#include <iostream>
#include <string>

namespace burgers {
int x = 12;
}
namespace hotdogs {
int x = 16;
}
int main() {
  std::cout << burgers::x << "\n";
  std::cout << hotdogs::x;

  return 0;
}
```
