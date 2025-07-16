#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // int a = 34;
  // cout << "The value of a was: " << a << endl;
  // a = 45;
  // cout << "The value of a is: " << a; 

  // ************Constants in C++************
  // const float a = 9.11;
  // cout << "The value of a is: " << a << endl;
  // a = 45.6; // You will get an error bcuz a is constant
  // cout << "The value of a is: " << a << endl;

  // ************Manipulators in C++************
  // int a  = 3, b = 78, c =1233;
  // setw(n) set n number of block
  // cout << "The value of a is: " << setw(4) << a << endl;
  // cout << "The value of b is: " << setw(4) << b << endl;
  // cout << "The value of c is: " << setw(4) << c << endl;



  // Operator Precedence
  int a = 3, b = 4;
  // int c = (a*5)+b;
  int c = ((((a*5)+b)-45)+87); // Associativity: L to R
  cout << c;

  return 0;
} 