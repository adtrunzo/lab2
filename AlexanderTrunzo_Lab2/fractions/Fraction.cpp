#include <iostream>
#include <cstdlib>

using namespace std;

class Fraction{

public:
  
  Fraction(int num = 1, int denom = 1) : the_numerator(num), the_denominator(denom){

}
  void display(){
    cout << the_numerator << "/" << the_denominator;
}



private:

  int the_numerator;
  int the_denominator;

public:
Fraction operator+(Fraction A) const{

  Fraction fract;
  fract.the_denominator = the_denominator * A.the_denominator;
  fract.the_numerator = (the_numerator * A.the_denominator) + (A.the_numerator * the_denominator);

  return fract;
}

Fraction operator-(Fraction B) const{

  Fraction fract;
  fract.the_denominator = the_denominator * B.the_denominator;
  fract.the_numerator = (the_numerator * B.the_denominator) - (B.the_numerator * the_denominator);
  return fract;
}

Fraction operator*(Fraction C) const{

  Fraction fract;
  fract.the_denominator = the_denominator * C.the_denominator;
  fract.the_numerator = the_numerator * C.the_numerator;
  return fract;
}

Fraction operator/(Fraction D) const{
  Fraction fract;
  fract.the_denominator = D.the_numerator * the_denominator;
  fract.the_numerator = the_numerator * D.the_denominator;
  return fract;
}

friend ostream& operator << (ostream& output, Fraction& E){
  cout << E.the_numerator << "/" << E.the_denominator;
  return output;
}
friend istream& operator >> (istream& input, Fraction& F){
  cout << "\nEnter numerator: ";
  cin >> F.the_numerator;
  cout << "Enter denominator: ";
  cin >> F.the_denominator;
  cout << F.the_numerator<<"/" << F.the_denominator;
  return input;
}

int smallint(){
  if(the_numerator<=the_denominator){
    return the_numerator;
}else{
    return the_denominator;
}
}

void reducefactor(){
  for(int i=2; i<=smallint(); i++){
    if(the_numerator%i == 0 && the_denominator%i == 0){
	the_numerator = the_numerator/i;
	the_denominator = the_denominator/i;
	i = 1;
}
}
}
};
