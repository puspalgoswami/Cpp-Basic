#include <iostream>
using namespace std;

int main() {

  // Array example
  int marks[] = {23, 45, 56, 89};


  int mathMarks[4];

  mathMarks[0] = 2278;
  mathMarks[1] = 738;
  mathMarks[2] = 378;
  mathMarks[3] = 578;

  cout << "These are math marks" << endl;
  cout << mathMarks[0] << endl;
  cout << mathMarks[1] << endl;
  cout << mathMarks[2] << endl;
  cout << mathMarks[3] << endl;
  // You can change value of an array
  marks[2] = 455;
  cout << "These are marks" << endl;
  cout << marks[0] << endl;
  cout << marks[1] << endl;
  cout << marks[2] << endl;
  cout << marks[3] << endl;
  // ***Using For Loop***
  cout << "\nPrinting the marks Array using For Loop" << endl;
  for (int i = 0; i < 4; i++)
  {
    cout << "Marks obtained by roll no." << i+1 << " is " << marks[i] << endl;
  }
  // ***Using While Loop***
  cout << "\nPrinting the marks Array using While Loop" << endl;
  int j = 0;
  while (j<4)
  {
    cout << "Marks obtained by roll no." << j+1 << " is " << marks[j] << endl;
    j++;
  }
  // ***Using do-While Loop***
  cout << "\nPrinting the marks Array using do While Loop" << endl;
  int o = 0;
  do
  {
    cout << "Marks obtained by roll no." << o+1 << " is " << marks[o] << endl;
    o++;
  }while (o<4);

  // Pointers and Arrays
  int* p = marks;
  cout << "\n";
  cout << *(p++) << endl;
  cout << *(++p) << endl;
  // cout << "The value of *p is " << *p << endl;
  // cout << "The value of *(p+1) is " << *(p+1) << endl;
  // cout << "The value of *(p+2) is " << *(p+2) << endl;
  // cout << "The value of *(p+3) is " << *(p+3) << endl;
  
  return 0;
}