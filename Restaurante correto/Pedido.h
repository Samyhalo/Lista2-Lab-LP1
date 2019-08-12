#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>

using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(int numero, int quantidade, float preco, string descricao);

        void setNumero(int numero);
        void setQuantidade(int quantidade);
        void setPreco(float preco);
        void setDescricao(string descricao);

        void print();

        int getNumero();
        int getQuantidade();
        float getPreco();
        string getDescricao();

    private:
        int numero, quantidade;
        float preco;
        string descricao;

};

#endif // PEDIDO_H
