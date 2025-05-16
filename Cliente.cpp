#include "Cliente.h"

// Implementação do construtor da classe Cliente
Cliente::Cliente(string nome, string cpf) : nome(nome), cpf(cpf) {}

// Retorna o nome do cliente
string Cliente::getNome() const {
    return nome;
}

// Retorna o CPF do cliente
string Cliente::getCpf() const {
    return cpf;
}
