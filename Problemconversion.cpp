/*
Anna Greene
Conversion Problem
Takes in feet and inches from user and converts to meters and centimeters
 */
#include <iostream>
using namespace std;

/**
 * Gets user input for feet and inches
 * @param feet   [Float for number of feet]
 * @param inches [Float for number of inches]
 */
void userInput(float& feet, float& inches){
  cout << "Enter feet: " << endl; // Prompting user for input
  cin >> feet; // Reading input
  cout << "Enter inches: " << endl;
  cin >> inches;

}

/**
 * Calculates the feet/inches to meters/centimeters
 * @param feet        [float for feet]
 * @param inches      [float for inches]
 * @param meters      [float for meters]
 * @param centimeters [float for centimeters]
 */
void calculate(float feet, float& inches, float& meters, float& centimeters){
  feet += (inches/12.0); // Computing inches to feet
  centimeters = (feet*0.3048*100); // Changing feet to centimeters
  while(centimeters >= 100){ // While loop to calculate the number of meters within total centimeters
    meters += 1;
    centimeters -= 100;
  }

}

/**
 * Outputs the results to the user
 * @param feet        [float for feet]
 * @param inches      [float for inches]
 * @param meters      [float for meters]
 * @param centimeters [float for centimeters]
 */
void output(float& feet, float& inches, float& meters, float& centimeters){
  cout << "There are " << meters << " meters " << centimeters << " centimeters in " << feet << " feet " << inches << " inches." << endl;
}

int main(int argc, char **argv){

  string a = "yes";

  while(a != "no"){
    float feet = 0.0; // Declaring and itializing all variables to 0
    float inches = 0.0;
    float meters = 0.0;
    float centimeters = 0.0;

    userInput(feet, inches); // Implementing user input
    calculate(feet,inches,meters,centimeters); // Implementing calculate
    output(feet,inches,meters,centimeters); // Implementing output
    cout << "Would you like to do another conversion? (yes/no)" << endl;
    cin >> a;
  }

  return 0;
}
