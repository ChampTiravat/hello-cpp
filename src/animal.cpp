#include <iostream>

class Animal {
  public:
    static int numOfAnimals;

    std::string name;
    float height;
    float weight;
    float length;

    Animal();
    ~Animal();

    void set_height();
    void set_weight();
    void set_length();

    float get_height();
    float get_weight();
    float get_length();

  private:
    std::string owner_name;
};

Animal::Animal() {
}

Animal::~Animal() {

}

float Animal::get_height() {
  return .0f;
}

float Animal::get_weight() {
  return .0f;
}

float Animal::get_length() {
  return .0f;
}

void Animal::set_height() {

}

void Animal::set_weight() {

}

void Animal::set_length() {

}

