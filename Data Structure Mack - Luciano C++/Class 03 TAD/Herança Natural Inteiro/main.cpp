#include <iostream>
#include "natural.h"


int main() {
  
  Inteiro n(5,'+');
  Inteiro m(10,'+');

  /* Soma */
  std::cout << "Soma 5 + 10" << std::endl ;
  Inteiro soma = n + m;
  std::cout << soma.getValue() << std::endl;

  /* Subtração */
  std::cout << "Soma 5 - 10" << std::endl ;
  Inteiro sub = n - m;
  std::cout << sub.getValue() << std::endl;

  /* Sucessor */
  std::cout << "Sucessor 5" << std::endl ;
  std::cout << n.suc().getValue() << std::endl;

  /* predecessor */
  std::cout << "predecessor 5" << std::endl ;
  std::cout << n.pred().getValue() << std::endl;


  /* Multiplicação */
  std::cout << "Multiplicação 5 * 10" << std::endl ;
  Inteiro mult= n * m;
  std::cout << mult.getValue() << std::endl;;
  return 0;
}