#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include <iostream>
#include <string>

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora()
{
    nome = "ND";
    salario = valorDaHora = 0;
    // padraoctor
}

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double salario, double valorDaHora)
{   
    salario = 0;
    setNome(nome);
    setValorDaHora(valorDaHora);
}

void TrabalhadorPorHora::setValorDaHora(double valorDaHora)
{
    this->valorDaHora=valorDaHora;
}

double TrabalhadorPorHora::getValorDaHora()
{
    return valorDaHora;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{   
    double resto=0, semanal=0;

    if(horas>40)
    {
        semanal = valorDaHora*40;
        resto = horas-40;
        semanal += (valorDaHora*1.5*resto);

    }else{
        semanal = valorDaHora*horas;
    }

    salario = 4*semanal;
    return semanal;
    
}
