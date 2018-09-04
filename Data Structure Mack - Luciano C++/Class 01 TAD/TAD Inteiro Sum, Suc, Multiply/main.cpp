#include <iostream>

class Inteiro{

private:
  int value;
public:
  int getValue();
  Inteiro(int v);
  ~Inteiro();
  Inteiro suc();
  Inteiro pred();
  Inteiro soma(Inteiro n);
  Inteiro sub(Inteiro n);
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

Inteiro Inteiro::pred(){
  Inteiro n(value - 1);
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

Inteiro Inteiro::sub(Inteiro n){
  Inteiro d(value - n.getValue());
  return d;
}

int main() {
  
  Inteiro inte(5);
  Inteiro m(10);

  /* Soma */
  std::cout << "Soma 5 + 10" << std::endl ;
  std::cout << inte.soma(m).getValue() << std::endl;

  /* Subtração */
  std::cout << "Subtração 5 - 10" << std::endl ;
  std::cout << inte.sub(m).getValue() << std::endl;

  /* Sucessor */
  std::cout << "Sucessor 5" << std::endl ;
  std::cout << inte.suc().getValue() << std::endl;

    /* predecessor */
  std::cout << "predecessor 5" << std::endl ;
  std::cout << inte.pred().getValue() << std::endl;

  /* Multiplicação */
  std::cout << "Multiplicação 5 * 10" << std::endl ;
  std::cout << inte.mult(m).getValue() << std::endl;
  return 0;
}