#pragma once

#include <string>
#include "animal.h"

using namespace std;

class Cat : public Animal
{
public:
  string sound;

  // Cat(string name)
  //   : Animal(name)
  //   {
  //     cout << "Cat constructor" << endl;
  //   }

  Cat(string name);
  ~Cat();

  // getters
  string get_sound();

  // setters
  void set_sound(string sound);
};
