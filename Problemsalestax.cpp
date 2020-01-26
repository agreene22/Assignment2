/*
Implement a function called addTax. The function addTax has two formal parameters: taxRate,
which is the amount of sales tax expressed as a percent; and cost, which is the cost of an
item before tax. The function returns the value (float) of cost so that it includes sales tax.
 */

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
  float total;
  taxRate /= 100;
  total = cost + (cost*taxRate);
  return total;
}

int main(int argc, char **argv){

  float cost = 10.0;
  float taxRate = 6.0;

  cout << "Cost after added tax: $" << addTax(taxRate, cost) << endl;

  return 0;
}
