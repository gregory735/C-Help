#include <iostream>
#include "natural.h"


int main() {
  Natural n(5);
  Natural m(10);

  /* Soma */
  std::cout << "Soma 5 + 10" << std::endl ;
  Natural soma = n + m;
  std::cout << soma.getValue() << std::endl;


  /* Sucessor */
  std::cout << "Sucessor 6" << std::endl ;
  std::cout << n.suc().getValue() << std::endl;;

  /* Multiplicação */
  std::cout << "Multiplicação 5 * 10" << std::endl ;
  Natural mult = n * m;
  std::cout << mult.getValue() << std::endl;;
  return 0;
}