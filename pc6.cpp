#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
 const float sugar = 1.5,
             butter = 1,
             flour = 2.75,
             cookies = 48;

    float num_cookies,
          total_butter,
          total_sugar,
          total_flour;

// Ask user how many cookies to make
    cout << "\nHow many cookies do you want to make?";
    cin >> num_cookies;

  // Calculate ingredients
    total_sugar  = (sugar * num_cookies) / cookies;
    total_flour  = (flour * num_cookies) / cookies;
    total_butter = (butter * num_cookies) / cookies;


  // Display amount of ingredients
    cout << "\nTo make " << num_cookies << " cookies ";
    cout << "you will need the following ingredients: \n";
    cout << " - " << total_butter << " cups of butter\n";
    cout << " - " << total_sugar  << " cups of sugar\n";
    cout << " - " << total_flour  << " cups of flour\n";
    cout << endl;

    // Terminate Program
    return 0;
}
