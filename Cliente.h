#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

// Classe que representa um cliente do banco
class Cliente {
private:
    string nome;  // Nome do cliente
    string cpf;   // CPF do cliente

public:
    // Construtor que inicializa nome e CPF
    Cliente(string nome, string cpf);

    // Métodos getters para acessar os dados do cliente
    string getNome() const;
    string getCpf() const;
};

#endif
