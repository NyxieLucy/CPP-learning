#include <algorithm>
#include <iostream>
#include <string>

template <typename T>
class myVector { // creating class vector for raw memory management
private:
  T *data;      // pointer to raw memory
  int capacity; // how much space we alocated
  int size;     // how many elements used

  void resize() {
    capacity *= 2;
    T *newData = new T[capacity]; // Allocate bigger array

    for (int i = 0; i < size; i++) {
      newData[i] = data[i]; // Copy old data to new array
    }

    delete[] data; // Free the old memory
    data = newData;
  }

public:
  T *begin() { return data; }
  T *end() { return data + size; }

  myVector() { // constructor
    size = 0;
    capacity = 4;
    data = new T[capacity]; // here we're allocating room for 4 ints (i dont
                            // think it's good for this example but alright)
  }

  // Added this so your loop below actually has something to save to!
  void push_back(const T &element) {
    if (size >= capacity) {
      resize();
    }
    data[size] = element;
    size++;
  }

  ~myVector() { delete[] data; }
};

class People { // another class for use input
private:
  std::string name;
  int CIN;
  int age;
  double height;
  double weight;

public:
  People() : name(""), CIN(0), age(0), height(0.0), weight(0.0) {}
  People(std::string nm, int Cin, int ag, double hei,
         double wei) { // constructor for them data
    name = nm;
    CIN = Cin;
    age = ag;
    height = hei;
    weight = wei;
  }
  void person() { // function to display stuff added (honetly idk wtf i'm
                  // doing just typing)
    std::cout << "name: " << name << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
  }
};

int main() {
  myVector<People> people_list;
  int people_num;
  std::cout << "how many people you wish to add?: "; // ah yes the classic input
  std::cin >> people_num;
  std::cin.ignore(10000, '\n');

  for (int i = 0; i < people_num; i++) { // the for loop to add stuff
    std::string tempoName;
    std::cout << "name: "; // i dont know why when i compile it skips the
                           // name, but i feel like it's related to that
                           // getline, cuz when pressing enter it does take an
                           // extra value of that empty space

    // the empty spaces, good show
    std::getline(std::cin, tempoName);
    std::cout << "age?: ";
    int tempoAge;
    std::cin >> tempoAge;
    std::cout << "CIN?: ";
    int cinTempo;
    std::cin >> cinTempo;
    std::cout << "height: ";
    double tempoHeight;
    std::cin >> tempoHeight;
    std::cout << "weight: ";
    double weightTemp;
    std::cin >> weightTemp;
    std::cin.ignore(10000, '\n'); // Clears the trailing newline so the NEXT
                                  // iteration's getline works!

    // there was a vector here but i had to make my own vector to learn about
    // data allocation and pointers
    People newPerson(tempoName, cinTempo, tempoAge, tempoHeight, weightTemp);

    // Actually storing it into your custom vector!
    people_list.push_back(newPerson);
  }

  for (auto &individual : people_list) {
    individual.person();
    std::cout << "\n";
  }
  return 0;
}
