#include <iostream>
#include "conta.h"




class ContaCorrente : public Conta
{
    private:

    float limite;

    public:

    ContaCorrente(float sld);
 
    void setLimite(float limit);
    float getLimite();

    void coletaDados();
    void mostraDados();

    void fazerSaque(float sqe);
    void opSaque();

};