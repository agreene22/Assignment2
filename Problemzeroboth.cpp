/*
Anna Greene
Zero Both
Takes in two numbers and implements a function to make them zero
 */

#include <iostream>
using namespace std;

/**
 * Zero Both sets two number parameters to zero
 * @param num1 [integer]
 * @param num2 [integer]
 */
void zeroBoth(int& num1, int& num2){
  num1 = 0; // Changing values to zero
  num2 = 0;
}

int main(int argc, char **argv){

  int myNum = 3;
  int myOtherNum = 6;

  cout << myNum << " " << myOtherNum << endl; // Displaying numbers before function implementation

  zeroBoth(myNum, myOtherNum); // Implementing function
  cout << myNum << " " << myOtherNum << endl; // Displaying numbers after function

  return 0;
}
