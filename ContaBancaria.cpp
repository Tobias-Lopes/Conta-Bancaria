#include "ContaBancaria.h"

// Construtor que inicializa os atributos da conta
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo)
    : numero(numero), titular(titular), saldo(saldo) {}

// Adiciona valor ao saldo, se for positivo
void ContaBancaria::depositar(double valor) {
    if (valor > 0) saldo += valor;
}

// Realiza saque se houver saldo suficiente
void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
    } else {
        cout << "Saque não realizado. Saldo insuficiente." << endl;
    }
}

// Transfere valor para outra conta, se houver saldo suficiente
void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero 
             << " para a conta " << destino.numero << endl;
    } else {
        cout << "Transferência não realizada. Saldo insuficiente." << endl;
    }
}

// Transfere valor dividido igualmente entre duas contas
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    double metade = valor / 2;
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino1.depositar(metade);
        destino2.depositar(metade);
        cout << "Transferido: R$ " << metade << " para cada conta (" 
             << destino1.numero << " e " << destino2.numero 
             << ") da conta " << numero << endl;
    } else {
        cout << "Transferência não realizada. Saldo insuficiente." << endl;
    }
}

// Exibe o saldo da conta
void ContaBancaria::exibirSaldo() const {
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}

// Exibe informações do titular e saldo
void ContaBancaria::exibirInformacoes() const {
    cout << "Titular: " << titular.getNome()
         << ", CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << numero 
         << ", Saldo: R$ " << saldo << endl;
}
