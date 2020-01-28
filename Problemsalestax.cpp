/*
Anna Greene
Sales Tax
Adds the tax to the price of an item
 */

#include <iostream>
using namespace std;

/**
 * Adds tax to a total cost given the rate and original cost
 * @param  taxRate [Float for tax rate as percentage]
 * @param  cost    [Float for original cost of item]
 * @return         [Total cost after tax added]
 */
float addTax(float taxRate, float cost){
  float total;
  taxRate /= 100; // Turns the tax rate into a decimal
  total = cost + (cost*taxRate); // Computes the tax and adds it
  return total;
}

int main(int argc, char **argv){

  float cost = 10.0;
  float taxRate = 6.0;

  cout << "Cost after added tax: $" << addTax(taxRate, cost) << endl; // Displays the cost after function implementation

  return 0;
}
