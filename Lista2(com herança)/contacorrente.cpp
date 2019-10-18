#include "contacorrente.h"

using namespace std;


void ContaCorrente::coletaDados(){
    float limite;

    cout<<"Digite o valor do limite: ";
    cin>>limite;

    setLimite(limite);
}

void ContaCorrente::setLimite(float limit){
    if(limit<0){
        limit=0;
        cout<<"Limite inválido"<<endl;
    }
    limite=limit;
}

void ContaCorrente::mostraDados(){

    cout<<"Limite da conta: "<<limite<<endl;
    cout<<"Saldo da conta: "<<saldo+limite<<endl;
}

void ContaCorrente::fazerSaque(float sqe){
    if((saldo+limite)<sqe){
        sqe=0;
        cout<<"Saldo insuficientep"<<endl;
    }
    saldo-=sqe;
}

void ContaCorrente::opSaque(){
    float saque;

    cout<<"Digite o valor que queira sacar: ";
    cin>>saque;

    fazerSaque(saque);
}

ContaCorrente::ContaCorrente(float sld){
    setSaldo(sld);
}

float ContaCorrente::getLimite(){
    return limite;
}