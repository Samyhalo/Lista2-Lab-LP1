#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    vazio = 0;
    //ctor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        if(pedidos[i].getDescricao() == p.getDescricao())
        {
            pedidos[i].setQuantidade(pedidos[i].getQuantidade()+p.getQuantidade());
            return;
        }
    }
    pedidos[vazio] = p;
    vazio++;
}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        pedidos[i].setDescricao("ND");
        pedidos[i].setQuantidade(0);
        pedidos[i].setPreco(0);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    double total=0;

    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        total += (pedidos[i].getQuantidade()*pedidos[i].getPreco());
    }
    return total;
}

void MesaDeRestaurante::print()
{
    for(int i=0; i<MAX_VETOR ; i++)
    {
        if(pedidos[i].getQuantidade()>0)
        {
            pedidos[i].print();
        }
    }
}