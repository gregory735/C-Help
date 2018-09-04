#include <iostream>

class Inteiro{

private:
  int value;
public:
  int getValue();
  Inteiro(int v);
  ~Inteiro();
  Inteiro suc();
  Inteiro soma(Inteiro n);
  Inteiro mult(Inteiro n);
};

Inteiro::Inteiro(int v){
  value = v;
}

Inteiro::~Inteiro(){}

int Inteiro::getValue(){
  return value;
}

Inteiro Inteiro::suc(){
  Inteiro n(value + 1);
  return n;
}

Inteiro Inteiro::soma(Inteiro n){
  Inteiro s(value +n.getValue());
  return s;
}

Inteiro Inteiro::mult(Inteiro n){
  Inteiro t(value * n.getValue());
  return t;
}

int main() {
  
  Inteiro inte(-5);
  Inteiro m(10);

  /* Soma */
  std::cout << "Soma -5 + 10" << std::endl ;
  std::cout << inte.soma(m).getValue() << std::endl;


  /* Sucessor */
  std::cout << "Sucessor -6" << std::endl ;
  std::cout << inte.suc().getValue() << std::endl;;

  /* Multiplicação */
  std::cout << "Multiplicação -5 * 10" << std::endl ;
  std::cout << inte.mult(m).getValue() << std::endl;;
  return 0;
}