#include <iostream>
#include "real.h"

int main() {
  Real n(1,3,'+');
  Real m(1,1,'+');

  /* Soma */
  std::cout << "Soma" << std::endl;
  Real soma = n + m;
  std::cout << soma.getValue() << std::endl;

  /* Subtração */
  std::cout << "Subtração" << std::endl ;
  Real sub = n - m;
  std::cout << sub.getValue() << std::endl;

  /* Multiplicação */
  std::cout << "Multiplicação" << std::endl;
  Real mult = n * m;
  std::cout << mult.getValue() << std::endl;

   /* Divisão */
  std::cout << "Divisão" << std::endl;
  Real div = n / m;
  std::cout << div.getValue() << std::endl;

  return 0;
  
}