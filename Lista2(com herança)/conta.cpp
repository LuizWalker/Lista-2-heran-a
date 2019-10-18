#include "conta.h"

using namespace std;



/////Conta/////

Conta::Conta(float sldo){

    setSaldo(sldo);

}

void Conta::setSaldo(float sldo){
    if(sldo<0){
        sldo=0;
        cout<<"O valor inicial do saldo é inválido"<<endl;

    }
    saldo=sldo;
}

void Conta::fazerDeposito(float dpsto){
    if(dpsto<0){
        dpsto=0;
        cout<<"Valor depositado é inválido"<<endl;
    }
    saldo+=dpsto;
}

void Conta::fazerSaque(float sqe){
    if(saldo<sqe){
        sqe=0;
        cout<<"Saldo insuficiente"<<endl;
    }
    saldo-=sqe;
}

void Conta::opDeposito(){
    float deposito;

    cout<<"Digite o valor do depósito: ";
    cin>>deposito;

    fazerDeposito(deposito);
}

void Conta::opSaque(){
    float saque;

    cout<<"Digite o valor que queira sacar: ";
    cin>>saque;

    fazerSaque(saque);
}

void Conta::exibirdados(){
    cout<<"O saldo da conta é: "<<getSaldo()<<endl;
}

float Conta::getSaldo(){
    return saldo;
}