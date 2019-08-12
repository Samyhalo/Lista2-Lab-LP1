#ifndef TRABALHADORASSALARIADO_H  
#define TRABALHADORASSALARIADO_H  
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include <iostream>
#include <string>

using namespace std;

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string nome, double salario);

        double calcularPagamentoSemanal(int horas);

};

#endif //TRABALHADORASSALARIADO_H