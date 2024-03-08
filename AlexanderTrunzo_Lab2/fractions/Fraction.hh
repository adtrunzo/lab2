#include <iostream>
#include <cstdlib>

using namespace std;

class Fraction{

public:
  
  Fraction(int num = 1, int denom = 1) : the_numerator(num), the_denominator(denom){

}
  void show();
  void reducefactor();
  int smallint();

private:

  int the_numerator;
  int the_denominator;

public:
Fraction operator+(Fraction A) const;

Fraction operator-(Fraction B) const;

Fraction operator*(Fraction C) const;

Fraction operator/(Fraction D) const;

friend ostream& operator<<(ostream& output, Fraction& E);

friend istream& operator>>(istream& input, Fraction& F);


};
