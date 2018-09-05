#include <iostream>
#include "natural.h"

int main() {
  Racional n(2,1,'+');
  Racional m(2,1,'+');

  /* Soma */
  std::cout << "Soma" << std::endl;
  Racional soma = n + m;
  std::cout << soma.getValue() << std::endl;

  /* Subtração */
  std::cout << "Subtração" << std::endl ;
  Racional sub = n - m;
  std::cout << sub.getValue() << std::endl;

  /* Multiplicação */
  std::cout << "Multiplicação" << std::endl;
  Racional mult = n * m;
  std::cout << mult.getValue() << std::endl;

   /* Divisão */
  std::cout << "Divisão" << std::endl;
  Racional div = n / m;
  std::cout << div.getValue() << std::endl;

  return 0;
  
}