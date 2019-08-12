#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <iostream>
#include <string>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(int mesaNum, Pedido p)
{
    mesa[mesaNum].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double totalRestaurante=0;
    for(int i=0 ; i<MAX_MESAS ; i++)
    {
        totalRestaurante += mesa[i].calculaTotal();
    }
    return totalRestaurante;
}

void RestauranteCaseiro::print()
{
    for(int i=0 ; i<MAX_MESAS ; i++)
    {
        if(mesa[i].calculaTotal() > 0)
        {
        cout<<"Mesa num "<<i<<":"<<endl;
        mesa[i].print();
        cout<<""<<endl;
        }
    }
}
