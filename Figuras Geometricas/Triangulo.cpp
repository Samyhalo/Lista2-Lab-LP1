#include "FiguraGeometrica.h"
#include "Triangulo.h" 
#include <iostream>
#include <string>

using namespace std;

Triangulo::Triangulo()
{
    nome = "Triangulo";
    base = altura = 0;
    //ctor
}

Triangulo::Triangulo(double base, double altura)
{
    setBase(base);
    setAltura(altura);   
}

double Triangulo::CalcularArea()
{
    return (base*altura)/2;
}

double Triangulo::getBase()
{
    return base;    
}

double Triangulo::getAltura()
{
    return altura;
}

void Triangulo::setBase(double base)
{
    this->base = base;
}

void Triangulo::setAltura(double altura)
{
    this->altura = altura;
}
