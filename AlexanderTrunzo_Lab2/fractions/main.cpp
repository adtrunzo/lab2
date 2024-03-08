#include <iostream>
#include <cstdlib>
#include "Fraction.cpp"


int main(void) {
  Fraction frac1, frac2;
  cout << "\n" << "Enter first fraction ";
  cin >> frac1;
  cout << "\n" << "Enter next fraction ";
  cin >> frac2;
  cout << "\n";
  cout << "fraction 1 = " << frac1 << "\n"<< "fraction 2 = " << frac2 << endl;

  Fraction add = frac1+frac2;
  Fraction minus = frac1-frac2;
  Fraction times = frac1*frac2;
  Fraction divide = frac1/frac2;
  
  cout << frac1 << "   +   " << frac2 << "   =   " << add << "\n";
  cout << frac1 << "   -   " << frac2 << "   =   " << minus << "\n";
  cout << frac1 << "   *   " << frac2 << "   =   " << times << "\n";
  cout << frac1 << "   /   " << frac2 << "   =   " << divide << "\n";

  add.reducefactor();
  minus.reducefactor();
  times.reducefactor();
  divide.reducefactor();
  cout << "reduced\n";
  cout << frac1 << "   +   " << frac2 << "   =   " << add << "\n";
  cout << frac1 << "   -   " << frac2 << "   =   " << minus << "\n";
  cout << frac1 << "   *   " << frac2 << "   =   " << times << "\n";
  cout << frac1 << "   /   " << frac2 << "   =   " << divide << "\n";
  cout << endl;
  return 0;
}
