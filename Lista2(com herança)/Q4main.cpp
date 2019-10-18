#include <iostream>
#include "contacorrente.h"

using namespace std;

int main(){

    ContaCorrente limits(800);

    
    limits.coletaDados();
    limits.opDeposito();
    limits.opSaque();
    limits.mostraDados();


    return 0;
}