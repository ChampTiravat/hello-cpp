#include <iostream>
#include <string>
#include "headers/animal.h"

using namespace std;

Animal::Animal(string name)
{
  this->name = name;
};

Animal::Animal()
{
  this->name = "undefined";
};

Animal::~Animal()
{
  cout << "removed " << this->name << endl;
};

string Animal::get_name()
{
  return this->name;
};

void Animal::set_name(string name)
{
  this->name = name;
};
