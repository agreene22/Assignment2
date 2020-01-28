/*
Anna Greene - 2314663
2darray
Gets user input to fill an array and display it back to the console
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int a[4][5]; // Declaring 2 dimensional array
  int num = 0;

  for(int i = 0; i < 4; ++i){ // For loop that iterates 4 times to go through rows
    for(int j = 0; j < 5; ++j){ // For loop that iterates 5 times to fill the columns
      cout << "Enter a number: " << endl; // Getting user input
      cin >> num;
      a[i][j] = num; // PUtting user input at desired index of array
    }
  }

  for(int i = 0; i < 4; ++i){ // For loops to display the numbers on the screen
    for(int j = 0; j < 5; ++j){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
