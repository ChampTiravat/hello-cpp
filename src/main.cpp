#include <iostream>

class Animal
{
private:
  char* name;

public:
  Animal(char* n);
  char* getName();
};

Animal::Animal(char* n) {
  this->name = n;
}

char* Animal::getName() {
  return this->name;
}

int main() {
  using namespace std;

  char* name = "puffy";
  Animal dog(name);

  cout << "Hello, " << dog.getName() << "\n" << endl;

  return 0;
}