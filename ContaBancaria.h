#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "Cliente.h"
#include <iostream>
using namespace std;

// Classe que representa uma conta bancária
class ContaBancaria {
private:
    int numero;         // Número da conta
    double saldo;       // Saldo da conta
    Cliente titular;    // Titular da conta (objeto Cliente)

public:
    // Construtor que inicializa número, titular e saldo (opcionalmente)
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0);

    // Métodos para operações bancárias
    void depositar(double valor);  // Deposita um valor na conta
    void sacar(double valor);      // Realiza saque, se houver saldo

    // Sobrecarga de métodos para transferências
    void transferir(double valor, ContaBancaria &destino); // Transfere para uma conta
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2); // Divide valor entre duas contas

    void exibirSaldo() const;          // Exibe saldo atual
    void exibirInformacoes() const;    // Exibe informações da conta e do titular
};

#endif
