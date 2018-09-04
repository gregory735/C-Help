#include <iostream>
#include "racional.h"

int main() {
  Racional n(2,2,'+');
  Racional m(2,2,'+');

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