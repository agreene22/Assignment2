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
  cout << num1 << " " << num2 << endl; // Displaying numbers after changing
}

int main(int argc, char **argv){

  int myNum = 3;
  int myOtherNum = 6;

  cout << "original numbers: " << myNum << " " << myOtherNum << endl; // Displaying numbers before function implementation

  zeroBoth(myNum, myOtherNum); // Implementing function

  return 0;
}
