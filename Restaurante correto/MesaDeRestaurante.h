#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#define MAX_VETOR 100
#include "Pedido.h"
#include <iostream>
#include <string>

using namespace std;

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();

        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();

        void print();

    private:
        int vazio;
        Pedido pedidos[MAX_VETOR];
};

#endif //MESADERESTAURANTE