#include <iostream>
#include <string>
#include "Consultor.h"
#include "Funcionario.h"

using namespace std;

Consultor::Consultor()
{
    matricula = 0;
    nome = "ND";
    salario = 0;
    //ctor
}

Consultor::Consultor(int matricula, string nome, double salario)
{
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
    //sets
}

double Consultor::getSalario()
{
    return salario+(0.1*salario);
}

double Consultor::getSalario(float percentual)
{
    return salario+(salario*(0.01*percentual));
}