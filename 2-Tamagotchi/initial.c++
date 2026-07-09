#include <iostream>

class Creature { // getting comfortable with OOP
private:
  int hunger;
  int boredom;
  double energy;
  // privates aren't accessible in the main that's why they're here
public:
  Creature(int hn, int br,
           double en) { // constructors always in the public area
    hunger = hn;
    boredom = br;
    energy = en;
  }
  void status() { // a function that displays the stats
    std::cout << "\n--- Cat Status ---\n";
    std::cout << "Hunger: " << hunger << "/100\n";
    std::cout << "Boredom: " << boredom << "/100\n";
    std::cout << "Energy: " << energy << "/100\n";
  }
  void feed() { // simple feeding function
    std::cout << "You fed the cat a delicious treat! \n";
    hunger += 20;
    if (hunger > 100)
      hunger = 100;
  }
  void play() { // same logic as the first
    std::cout << "you're playing with the kitten! \n";
    boredom += 20;
    if (boredom > 100)
      boredom = 100;
  }
  void sleep() { // same thing different names
    std::cout << "the cat is resting! \n";
    energy += 20;
    if (energy > 100)
      energy = 100;
  }
};

int main(int argc, char *argv[]) {
  Creature cat(0, 0, 0); // creating a hungry neglated cat
  char choice;
  std::cout << "------ TAMAGOCHI ------ \n";
  cat.status();
  bool logged = true; // i was thinking how to keep it going and i found a while
                      // loop as long as the condition is true
  while (logged) {
    std::cout << "what dou wanna do?: \n";
    std::cout << "f : feed / p : play / s : sleep / q : quit \n";
    std::cin >> choice;
    switch (choice) { // i was sick of using if else statements so i'm using
                      // switches much cleaner
    case 'f':
      cat.feed();
      cat.status();
      break;
    case 'p':
      cat.play();
      cat.status();
      break;
    case 's':
      cat.sleep();
      cat.status();
      break;
    case 'q':
      std::cout
          << "okay bye!\n "; // here by changing logged value the condition
                             // becomes false so it breaks out of it
      logged = false;
      break;
    default:
      std::cout << "unvalid action";
    }
  }
  std::cout << "------------------";
  return 0;
}
