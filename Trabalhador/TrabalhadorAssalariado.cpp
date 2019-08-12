#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>
#include <string>

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    nome = "ND";
    salario = 0;
    //ctor
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas)
{
    double semanal=0;
    semanal = salario/4;
    return semanal;
}
