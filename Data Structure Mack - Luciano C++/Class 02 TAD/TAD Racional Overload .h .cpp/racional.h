#ifndef RACIONAL_H
#define RACIONAL_H


class Racional{
    private:
        int a,b;
        char sinal;
    public:
        Racional(int va, int vb, char sinal);
        ~Racional();
        int getA();
        int getB();
        int getValue();
        Racional operator+(Racional n);
        Racional operator-(Racional n);
        Racional operator*(Racional n);
        Racional operator/(Racional n);
};
#endif