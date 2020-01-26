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
  int count = 0;

  for(int i = 0; i < 10; ++i){
    cout << "Enter up to ten positive integers (Enter a negative to stop): "; //DOES IT STOP IF A NEGATIVE IS ENTERED
    cin >> num;
    if(num >= 0){
      numberArray[i] = num;
      count++;
    }
    else{
      break;
    }
  }

  for (int i = 0; i < count; ++i){
    cout << numberArray[i] << endl; 
  }

  return 0;
}
