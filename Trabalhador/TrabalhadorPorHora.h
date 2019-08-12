#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <iostream>
#include <string>

using namespace std;

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string nome, double salario, double valorDaHora);
        
        void setValorDaHora(double valorDaHora);

        double getValorDaHora();

        double calcularPagamentoSemanal(int horas);

    protected:
        double valorDaHora;
};

#endif //TRABALHADORPORHORA_H