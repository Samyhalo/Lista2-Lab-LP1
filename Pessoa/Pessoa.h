#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
#include "Endereco.h"

using namespace std;

class Pessoa
{
    public:
        Pessoa(string nome);
        Pessoa(string nome, Endereco e, string telefone);

        void setNome(string nome);
        void setTelefone(string telefone);
        void setEndereco(Endereco e);

        string getNome();
        string getTelefone();
        string getEndereco();

    private:
        string nome;
        string telefone;
        Endereco endereco;

};

#endif //PESSOA_H