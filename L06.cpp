// There are two types of header files
// 1. System header files: It comes iwth compiler
#include <iostream>
// 2. Uder defined header files: It is written by the programmer
// #include "this.h" --> This will produce error if this.h is not included in the current directory

using namespace std;

int main(){
  int a = 4, b = 5;
  cout << "Operators in C++" << endl;
  cout << "Following are the types of operators in C++" << endl;
  // Arithmetic Operators
  cout << "The value of a + b is " << a + b << endl;
  cout << "The value of a - b is " << a - b << endl;
  cout << "The value of a * b is " << a * b << endl;
  cout << "The value of a / b is " << a / b << endl;
  cout << "The value of a++ is " << a++ << endl;
  cout << "The value of a-- is " << a-- << endl;
  cout << "The value of ++a is " << ++a << endl;
  cout << "The value of --a is " << --a << endl;
  
  // Assignment Operators
  int n = 3, m = 9;
  char d = 'd';

  // Comparison Operators
  cout << "The value of a == b is " << (a == b) << endl;
  cout << "The value of a != b is " << (a != b) << endl;
  cout << "The value of a > b is " << (a > b) << endl;
  cout << "The value of a < b is " << (a < b) << endl;
  cout << "The value of a <= b is " << (a <= b) << endl;
  cout << "The value of a >= b is " << (a >= b) << endl;

  // Logical Operators
  cout << "Following are the logical operators in C++" << endl;
  cout << "The value of logical 'and' operator (a == b) && (a < b) is " << ((a == b) && (a < b)) << endl;
  cout << "The value of logical 'or' operator (a == b) && (a < b) is " << ((a == b) || (a < b)) << endl;

  return 0;
}