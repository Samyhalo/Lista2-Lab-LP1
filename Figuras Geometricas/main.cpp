#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    FiguraGeometrica *circ = new Circulo(3.5);
    FiguraGeometrica *quad = new Quadrado(4);
    FiguraGeometrica *tri = new Triangulo(4.6, 5);

    cout<<"area do quad: "<<quad->CalcularArea()<<endl;
    cout<<"area do tri: "<<tri->CalcularArea()<<endl;
    cout<<"area do circ: "<<circ->CalcularArea()<<endl;

    return 0;
}