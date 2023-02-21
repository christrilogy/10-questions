#include<iostream> 
#include<cmath> 
using namespace std; 

int main ()
{
 double loan_payment, 
        insurance, 
        gas, 
        oil, 
        tires, 
        maintenance,
        monthly,
        yearly;

  cout << "Enter loan payment \n";
    cin >> loan_payment;
  cout << "Enter insurance payment\n";
    cin >> insurance;
  cout << "Enter gas payment\n";
    cin >> gas;
  cout << "Enter oil payment\n";
    cin >> oil;
  cout << "Enter tires payment\n";
    cin >> tires;
  cout << "Enter maintenance payment\n";
  cin >> maintenance;

  monthly = maintenance + loan_payment + insurance + gas + oil + tires;

  yearly = monthly * 12 ;

  cout << "Total montly cost =" << monthly << endl;
  cout << "Total cost annually = " << yearly << endl;
  
  return 0;
  }
