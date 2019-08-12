#include "FiguraGeometrica.h"
#include "Circulo.h" 
#include <iostream>
#include <string>

using namespace std;

Circulo::Circulo()
{
    nome = "Circulo";
    raio = 0;
    //ctor
}

Circulo::Circulo(double raio)
{
    setRaio(raio);
}

double Circulo::CalcularArea()
{
    return 3.14*(raio*raio);
}

double Circulo::getRaio()
{
    return raio;
}

void Circulo::setRaio(double raio)
{
    this->raio = raio;
}