/*
Write code that will fill the array a (declared below) with numbers typed in at the
keyboard. The numbers will be input five per line, on four lines (although your solution
need not depend on how the input numbers are divided into lines).
int a[4][5]
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int a[4][5];
  int num = 0;

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cin >> num;  //SHOULD WE BE USING A CIN OR WHAT
      a[i][j] = num;
    }
  }

  return 0;
}
