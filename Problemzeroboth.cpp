/*
Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.
 */

#include <iostream>
using namespace std;

void zeroBoth(int& num1, int& num2){
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv){

  int myNum = 3;
  int myOtherNum = 6;

  cout << myNum << " " << myOtherNum << endl;

  zeroBoth(myNum, myOtherNum);
  cout << myNum << " " << myOtherNum << endl;

  return 0;
}
