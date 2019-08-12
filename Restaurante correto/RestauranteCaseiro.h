#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#define MAX_MESAS 30
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>

using namespace std;

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();

        void adicionaAoPedido(int mesaNum, Pedido p);

        double calculaTotalRestaurante();

        void print();

    private:

        MesaDeRestaurante mesa[MAX_MESAS];
};

#endif //RESTAURANTECASEIRO_H