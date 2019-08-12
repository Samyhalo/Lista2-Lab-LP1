#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario::Funcionario()
{
    matricula = 0;
    nome = "ND";
    salario = 0;
    //ctor
}

Funcionario::Funcionario(int matricula, string nome, double salario)
           : Funcionario()
{
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
    //sets
}

int Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}

double Funcionario::getSalario(float percentual)
{   return 0;
}

void Funcionario::setMatricula(int matricula)
{
    this->matricula = matricula;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}