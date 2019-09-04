#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main(void)
{ 
  // initialize an array
  int grades [5] = { 95, 88, 77, 100, 90 }; 

  // accessing an element in an array an printing
  cout << grades[3] << endl;

  // accessing an element of and modifying the value
  grades[3] = 75;
  cout << grades[3] << endl;
  
  // print values of an array with for loop
  for (int n=0; n<5; ++n) {
    cout << grades[n] << ' ';
  }

  cout << endl;
  
  // multidimensional array
  int quarterly_grades[4][2] = {{81, 92}, {77, 85}, {90, 79}, {83, 94}};

  // output each array element's value 
  for (int i = 0; i < 4; i++) 
  { 
      for (int j = 0; j < 2; j++) 
      { 
          cout << "Element at quarterly_grades[" << i 
                << "][" << j << "]: "; 
          cout << quarterly_grades[i][j]<<endl; 
      } 
  } 
  
  // array as parameters
  int first_quarter_grades[] = {88, 77};
  int second_quarter_grades[] = {100, 90, 79};
  printarray (first_quarter_grades,2);
  printarray (second_quarter_grades,3);  
}
