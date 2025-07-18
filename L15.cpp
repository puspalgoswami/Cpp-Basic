#include <iostream>
using namespace std;

// Function prototype ---> search it, zaroor milega
// type function-name (arguments);

// int sum(int a, int b);   //--> Acceptable
// int sum(int a, b);       //--> Not Acceptable
int sum(int, int);          //--> Acceptable

// void g(void);            //--> Acceptable
void g();                   //--> Acceptable

int main() {
  int num1, num2;
  cout << "Enter first number:" << endl;
  cin >> num1;
  cout << "Enter second number:" << endl;
  cin >> num2;

  // num1 & num2 are Actual Parameters

  cout << "The sum is " << sum(num1, num2);
  g();
  return 0;
}

int sum(int a, int b) {

  // a & b are Formal Parameters

  // a & b will be taking value from Actual Parameter num1 & num2
  // (num1 = a) & (num2 = b)

  int c = a + b;
  return c;
}

void g(){
  cout << "\nHello, Good Morning";
}
