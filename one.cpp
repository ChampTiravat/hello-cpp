#include <iostream> // allow us to use count and more 
#include <vector> // arrays
#include <string> 
#include <fstream> // file io

using namespace std;



int main() {
  
  int a = 10;

  cout << a << endl;

  return 0;
}



int test() {

  // Exception Handling
  /*
  int b = 0;

  try {
    if (b == 0) {
      string err = "second param cannot be 0";
      throw(err);
    }
    cout << 10 / b << endl;
  } catch(string e) {
    cout << e << endl;
  }
  */

  // Vector stuff
  /*
  vector <int> myVector;

  int arr[3] = {1,2,3};

  myVector.insert(myVector.begin(), arr, arr+3);
  myVector.push_back(10);
  myVector.pop_back();
  myVector.back();
  myVector.size();
  myVector.empty();

  cout << myVector.at(3) << endl;
  */

  //string userInput;
  //getline(cin, userInput);
  
  /*
  string name = "tiravat";
  char lname[15] = {'t', 'h', 'a', 'i', 's', 'u', 'b', 'v', 'o', 'r', 'a', 'k', 'u', 'l', '\0'};
  cout << name.empty() << endl;
  cout << name.size() << endl;
  cout << name << endl;
  cout << name.append("xx") << endl;
  cout << name << endl;
  */

  //cout << "hello, world" << endl;
  //const double pi = 3.14159265359; // accurate up to 16 figures
  //char mygrade = 'a'; // takes one byte of memory
  //bool ishappy = false;
  //int x           = 10;
  //long int y      = 10;
  //long long int u = 10;
  //short int z     = 10;
  //unsigned int ux = 10;
  //float favnum = 3.141; // accurate up to 6 figures
  // cout << "type of: " << sizeof(u) << endl;
  
  // bool isAdmin = (true) ? true : false;

  /*
  int arr[10] = {1, 2, 3, 4};

  for (int i=0; i < 4; i++) {
    cout << arr[i] << endl;
  }


  for (int i=0; i < 4; i++) {
  cout << rand() << endl;
  }
  */

  return 0;
}
