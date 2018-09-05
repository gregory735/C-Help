#include <iostream>
#include "complexo.h"

int main() {
  Complexo n(2,5,'i','+','+');
  Complexo m(1,3,'i','+','+');
  //Sum
  Complexo sum = n+m;
  std::cout << sum.getValueReal() << " + " << sum.getValueImaginario()<<"i"<<"\n";
  //Sum
  Complexo sub = n-m;
  std::cout << sub.getValueReal() << " + " << sub.getValueImaginario()<<"i"<<"\n";

  //Sum
  Complexo mult = n*m;
  std::cout << mult.getValueReal() << " + " << mult.getValueImaginario()<<"i";

}