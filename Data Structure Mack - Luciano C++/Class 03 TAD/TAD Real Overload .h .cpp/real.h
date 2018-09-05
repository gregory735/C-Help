#ifndef REAL_H
#define REAL_H


class Real{
    private:
        double a,b;
        char sinal;
    public:
        Real(double va, double vb, char sinal);
        ~Real();
        double getA();
        double getB();
        double getValue();
        Real operator+(Real n);
        Real operator-(Real n);
        Real operator*(Real n);
        Real operator/(Real n);
};
#endif