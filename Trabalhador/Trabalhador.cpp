#include "Trabalhador.h"
#include <iostream>
#include <string>

using namespace std;

Trabalhador::Trabalhador()
{
    nome = "ND";
    salario = 0;
    //ctor
}

void Trabalhador::setNome(string nome)
{
    this->nome = nome;
}

void Trabalhador::setSalario(double salario)
{
    if(salario>0)
    {
    this->salario = salario;
    }
}

double Trabalhador::getValorDaHora()
{return 0;
}

void Trabalhador::setValorDaHora(double valorDaHora)
{
}

double Trabalhador::calcularPagamentoSemanal(int horas)
{
}

string Trabalhador::getNome()
{
    return nome;
}

double Trabalhador::getSalario()
{
    return salario;
}
