struct Node { // struct that holds different variable types for the same purpose
  int value;  // the value
  Node *next; // pointer to the next memory space
};
Node *createNode(int value) { // idk why it only takes the value when the struct
                              // mentions both stuff
  Node *newNode = new Node;
  newNode->value = value; // the value of the new node we created, tho i suppose
                          // the pointer should be the value
  newNode->next = nullptr; // that's the pointer
  return newNode;          // returning the new node... not the value (int)
}

int main() {}
