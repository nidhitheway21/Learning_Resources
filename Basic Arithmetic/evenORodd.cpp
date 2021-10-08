/*
Done by Sanjoy Saha
Github user link - https://github.com/SanjoySaha24

Q) Check Whether Number is Even or Odd (C++)

*/

#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}
