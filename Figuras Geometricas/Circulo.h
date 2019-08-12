#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double raio);

        double CalcularArea();

        double getRaio();

        void setRaio(double raio);

    protected:
        double raio;
};

#endif // CIRCULO_H