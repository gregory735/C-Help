#include <iostream>

class Natural{

private:
  unsigned int value;
public:
  unsigned int getValue();
  Natural(unsigned int v);
  ~Natural();
  Natural suc();
  Natural soma(Natural n);
  Natural mult(Natural n);
};

Natural::Natural(unsigned int v){
  value = v;
}

Natural::~Natural(){}

unsigned int Natural::getValue(){
  return value;
}

Natural Natural::suc(){
  Natural n(value + 1);
  return n;
}

Natural Natural::soma(Natural n){
  Natural s(value +n.getValue());
  return s;
}

Natural Natural::mult(Natural n){
  Natural t(value * n.getValue());
  return t;
}

int main() {
  Natural nat(5);
  Natural m(10);

  /* Soma */
  std::cout << "Soma 5 + 10" << std::endl ;
  std::cout << nat.soma(m).getValue() << std::endl;


  /* Sucessor */
  std::cout << "Sucessor 6" << std::endl ;
  std::cout << nat.suc().getValue() << std::endl;;

  /* Multiplicação */
  std::cout << "Multiplicação 5 * 10" << std::endl ;
  std::cout << nat.mult(m).getValue() << std::endl;;
  return 0;
}