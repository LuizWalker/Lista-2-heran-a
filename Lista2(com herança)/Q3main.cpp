#include <iostream>
#include "conta.h"

using namespace std;

int main(){

    Conta conta(800);

    conta.opDeposito();
    conta.opSaque();
    conta.exibirdados();



    return 0;
}