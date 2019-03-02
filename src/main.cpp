#include <iostream>
#include "headers/animal.h"
#include "headers/cat.h"

using namespace std;

int main()
{
  Animal puf_the_dog("puf");
  Animal hoof_the_dog;
  Cat pop_the_cat;

  hoof_the_dog.set_name("hoof");
  pop_the_cat.set_name("pop");
  pop_the_cat.set_sound("meow");

  cout << puf_the_dog.get_name() << endl;
  cout << hoof_the_dog.get_name() << endl;
  cout << pop_the_cat.get_name() << endl;
  cout << pop_the_cat.get_sound() << endl;

  return 0;
}
