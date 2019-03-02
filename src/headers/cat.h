#pragma once

#include <string>
#include "animal.h"

using namespace std;

class Cat : public Animal
{
  public:
    string sound;

    string get_sound();
    void set_sound(string sound);

};
