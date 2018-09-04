#ifndef INTEIRO_H
#define INTEIRO_H

class Inteiro{

private:
  int value;
public:
  int getValue();
  Inteiro(int v);
  ~Inteiro();
  Inteiro suc();
  Inteiro operator+(Inteiro n);
  Inteiro operator-(Inteiro n);
  Inteiro operator*(Inteiro n);
};


#endif