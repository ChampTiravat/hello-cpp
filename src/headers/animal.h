#pragma once

#include <string>

using namespace std;

class Animal
{
  private:
    string name;

  public:
    Animal(string name);
    Animal();
    ~Animal();
    string get_name();
    void set_name(string name);
};
