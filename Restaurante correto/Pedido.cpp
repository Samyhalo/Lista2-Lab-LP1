#include "Pedido.h"
#include <iostream>
#include <string>

using namespace std;

Pedido::Pedido()
{
    numero = 0;
    quantidade = 0;
    preco = 0;
    descricao = "ND";
    //ctor
}

Pedido::Pedido(int numero, int quantidade, float preco, string descricao)
{
    setNumero(numero);
    setQuantidade(quantidade);
    setPreco(preco);
    setDescricao(descricao);
}

void Pedido::setNumero(int numero)
{
    if(numero<0)
    {
        cout<<"Numero invalido"<<endl;
    }else
        this->numero = numero;
}

void Pedido::setQuantidade(int quantidade)
{
    if(quantidade<0)
    {
        cout<<"Quantidade invalido"<<endl;
    }else
        this->quantidade = quantidade;
}

void Pedido::setPreco(float preco)
{
    if(preco<0)
    {
        cout<<"Preco invalido"<<endl;
    }else
        this->preco = preco;
}

void Pedido::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void Pedido::print()
{
    cout<<descricao<<", Quantidade: "<<quantidade<<", Preco: "<<preco<<", Total: R$"<<quantidade*preco<<endl;
}

int Pedido::getNumero()
{
    return numero;
}

int Pedido::getQuantidade()
{
    return quantidade;
}

float Pedido::getPreco()
{
    return preco;
}

string Pedido::getDescricao()
{
    return descricao;
}