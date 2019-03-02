#include <iostream>
#include <string>
#include "headers/cat.h"

using namespace std;

string Cat::get_sound() {
  return this -> sound;
}

void Cat::set_sound(string sound) {
  this -> sound = sound;
}