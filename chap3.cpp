#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main ()
{
  int num1, num2 , ans;
  int button;

  cout << "Enter the first number below you want to add\n ";
  cin >> num1;
  cout << "Enter the second number below you want to add\n";
  cin >>num2;
  
  ans = num1 + num2;

  cout << "Enter 1 to see answer 2 to start over\n \n";
  cin >> button;
  
  if (button == 1) 
    cout << "Answer =" <<ans<< endl;
  
  else
    cout << "Try again-- Refresh the page" <<endl;
  
return 0;
    }
