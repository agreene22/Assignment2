/*
Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one
for user input, one or more for calculating, and one for output(console). Include
a loop that lets the user repeat this computation for new input values until the
user says he or she wants to end the program (user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
 */
#include <iostream>
using namespace std;

void userInput(float& feet, float& inches){
  cout << "Enter feet: " << endl;
  cin >> feet;
  cout << "Enter inches: " << endl;
  cin >> inches;

}

void calculate(float& feet, float& inches, float& meters, float& centimeters){
  feet += (inches/12.0);
  meters = (feet*0.3048);
  // if(meters/100 > )
  centimeters = meters/100;
  // cout << meters << endl;


}

void output(float& feet, float& inches, float& meters, float& centimeters){
  cout << "There are " << meters << " meters " << centimeters << " centimeters in " << feet << " feet " << inches << " inches." << endl;
}

int main(int argc, char **argv){

  float feet = 0.0;
  float inches = 0.0;
  float meters = 0.0;
  float centimeters = 0.0;

  userInput(feet, inches);
  calculate(feet,inches,meters,centimeters);
  output(feet,inches,meters,centimeters);

  return 0;
}
