#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(double base, double altura);

        double CalcularArea();

        double getBase();
        double getAltura();
        
        void setBase(double base);
        void setAltura(double altura);

    protected:
        double base, altura;
};

#endif // TRIANGULO_H