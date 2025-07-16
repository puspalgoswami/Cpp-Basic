#include <iostream>

using namespace std;

int main(){
  /*Loops in C++:
  There are 3 types of loops inC++:
      1. For Loop
      2. While Loop
      3. do-While Loop
  */
  
  /*For Loop in C++*/
  // int i=1;
  // i++; 
  // cout<<i;
  // for (initialization; condition; updation)
  // {
  //   loop body(C++ code);
  // }

  // for (int i = 0; i < 100; i++)
  // {
  //   /* code */
  //   cout << i << endl;
  // }

  // Example of infinite for Loop
  // for (int i = 0; 34 <= 100; i++)
  // {
  //   /* code */
  //   cout << i << endl;
  // }

  /*While Loop in C++*/
  // Syntax:
  // while (condition)
  // {
  //   /* code */
  // }
  
  // Printing 1 to 40 using while loop
  // int i = 1;
  // while (i <=40)
  // {
  //   cout << i << endl;
  //   i++;
  // }
  
  // Example of Infinite while loop
  // int i = 1;
  // while (true)
  // {
  //   cout << i << endl;
  //   i++;
  // }

  /* do While loop in C++ */
  // Syntax:
  // do
  // {
  //   /* code */
  // } while (condition);

  // Printing 1 to 40 using while loop
  // int i = 1;
  // do
  // {
  //   cout << i << endl;
  //   i++;
  // }while (i <= 40);
  
  // Table of 6
  int n;
  cout << "Enter a number to write its table: ";
  cin >> n;
  for (int i = 1; i <= 10; i++)
  {
    cout << n*i << endl;
    /* code */
  }
  
  return 0;
}