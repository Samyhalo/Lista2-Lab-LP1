#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep);

        string toString();

        string getRua();
        string getNumero();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCep();

        void setRua(string rua);
        void setNumero(string numero);
        void setBairro(string bairro);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);

    private:
        string rua;
        string numero;
        string bairro;
        string cidade;
        string estado;
        string cep;
};

#endif //ENDERECO_H