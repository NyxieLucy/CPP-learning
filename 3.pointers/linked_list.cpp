#include <iostream>
#include <string>
void opinion_on_pointers_swapper(std::string *x, std::string *y) {
  std::string temporary = *x;
  *x = *y;
  *y = temporary;
};
int main() {
  std::string truth = "omg i love pointers they're so easy and make sence";
  std::string lie = "this shit is boggus not gonna lie";
  opinion_on_pointers_swapper(&truth, &lie);
  std::string real_truth = truth;
  std::cout << "real truth is: " << real_truth;
  return 0;
}
