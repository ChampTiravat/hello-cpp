#include <iostream>
#include <string>
#include "headers/cat.h"

using namespace std;

Cat::Cat(string name)
   : Animal(name) 
   {
     cout << "Cat constructor" << endl;
   }

Cat::~Cat()
{
  cout << "Cat removed" << endl;
}

string Cat::get_sound()
{
  return this -> sound;
}

void Cat::set_sound(string sound)
{
  this -> sound = sound;
}