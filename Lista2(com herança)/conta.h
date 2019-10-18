#include <iostream>


class Conta 
{
    protected:

    float saldo;

    public:

    Conta(float sldo);
    Conta(){};

    void setSaldo(float sldo);
    float getSaldo();

    void fazerDeposito(float dpsto);
    void opDeposito();

    void fazerSaque(float sqe);
    void opSaque();

    void exibirdados();

};