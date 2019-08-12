#include <iostream>
#include <string>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(void)
{   
    RestauranteCaseiro r = RestauranteCaseiro();
    Pedido p1;
    p1 = Pedido(11, 2, 5.5, "MilkShake");
    r.adicionaAoPedido(1, p1);
    p1 = Pedido(11, 1, 5.5, "MilkShake");
    r.adicionaAoPedido(1, p1);
    p1 = Pedido(23, 3, 15, "Burguer");
    r.adicionaAoPedido(1, p1);
    p1 = Pedido(23, 2, 15, "Burguer");

    p1 = Pedido(40, 1, 25.5, "Fritas");
    r.adicionaAoPedido(2, p1);
    p1 = Pedido(40, 1, 25.5, "Fritas");
    r.adicionaAoPedido(2, p1);

    r.print();

    cout<<"TOTAL RESTAURANTE TAL:"<<endl;
    cout <<"R$"<< r.calculaTotalRestaurante() <<endl;

    return 0;
}