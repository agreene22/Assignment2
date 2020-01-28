/*
Anna Greene
Int array
Takes in user input to fill an array and display back to the console
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int num = 0; // Declaring and itializing to default values
  int numberArray[10] = {};
  int count = 0;

  for(int i = 0; i < 10; ++i){ //For loop to get in up to ten integers
    cout << "Enter up to ten positive integers (Enter a negative to stop): "; // Prompting user for input
    cin >> num; // Reading in user input
    if(num >= 0){
      numberArray[i] = num; // Adding the number to the array
      count++; // Counting the total number of integers entered
    }
    else{ // Break the loop if a negative number is entered
      break;
    }
  }

  for (int i = 0; i < count; ++i){ // Displaying the array to the user
    cout << numberArray[i] << endl;
  }

  return 0;
}
