#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo{
    
    private:
        int a,b;
        char sinal;
        char sinalB;
        char imaginario;
        
    public:
        Complexo(int va,int vb,char imaginario, char sinal, char sinalB);
        ~Complexo();
        int getA();
        int getB();
        int getValueReal();
        int getValueImaginario();
        Complexo operator+(Complexo n);
        Complexo operator-(Complexo n);
        Complexo operator*(Complexo n);
        /*
        
        Complexo operator/(Complexo n);*/
};
#endif
