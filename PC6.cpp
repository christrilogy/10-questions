#include <iostream>
using namespace std;

int main ()
{    
     double mass, weight;

    cout << "Enter the obects mass" << endl;
    cin >> mass;

    weight = mass * 9.8 ;
  

    if (weight >= 1000) 
      cout << " Object weight is to heavy " << endl;
    else if (weight <= 10)
      cout <<" Object weight is too light " << endl;

return 0;

}
