#include <iostream>
#include <ostream>
#include <string>
class myVector { // creating class vector for raw memory management
private:
  int *data;    // pointer to raw memory
  int capacity; // how much space we alocated
  int size;     // how many elements used

public:
  myVector() { // constructor
    size = 0;
    capacity = 4;
    data = new int[capacity]; // here we're allocating room for 4 ints (i dont
                              // think it's good for this example but alright)
  }
};
class People { // another class for use input
private:
  std::string name;
  int CIN;
  int age;
  double height;
  double weight;

public:
  People(std::string nm, int Cin, int ag, double hei,
         double wei) { // constructor for them data
    name = nm;
    CIN = Cin;
    age = ag;
    height = hei;
    weight = wei;
  }
  void person() { // function to display stuff added (honetly idk wtf i'm doing
                  // just typing)
    std::cout << "name: " << name << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
  }
};

int main() {
  int people_num;
  std::cout << "how many people you wish to add?: "; // ah yes the classic input
  std::cin >> people_num;
  for (int i = 0; i < people_num; i++) { // the for loop to add stuff
    std::string tempoName;
    std::cout << "name: "; // i dont know why when i compile it skips the name,
                           // but i feel like it's related to that getline, cuz
                           // when pressing enter it does take an extra value of
                           // that empty space

    std::cin.ignore(); // okay this line fixes it, it basically clears out all
                       // the empty spaces, good show
    std::getline(std::cin, tempoName);
    std::cout << "age?: \n";
    int tempoAge;
    std::cin >> tempoAge;
    std::cout << "CIN?: \n";
    int cinTempo;
    std::cin >> cinTempo;
    std::cout << "height: \n";
    double tempoHeight;
    std::cin >> tempoHeight;
    std::cout << "weight: \n";
    double weightTemp;
    std::cin >> weightTemp;
    // there was a vector here but i had to make my own vector to learn about
    // data allocation and pointers
    People newPerson(tempoName, cinTempo, tempoAge, tempoHeight, weightTemp);
  }
  return 0;
}
