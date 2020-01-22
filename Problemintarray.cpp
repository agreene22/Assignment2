/*
Write a program that will read up to ten nonnegative integers into an array called
numberArray and then write the integers back to the screen (console output). For
this exercise you need not use any functions.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int num = 0;
  int numberArray[10] = {};

  for(int i = 0; i < 10; ++i){
    cout << "Enter up to ten positive integers (Enter a negative to stop): "; //DOES IT STOP IF A NEGATIVE IS ENTERED
    cin >> num;
    if(num >= 0){
      numberArray[i] = num;
    } else{
      break;
    }
  }

  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << endl; //DO WE PRINT THE EMPTY SPACES? IF NOT HOW DO WE DO THAT BC 0 IS nonnegative
  }

  return 0;
}
