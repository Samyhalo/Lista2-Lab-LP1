#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    Trabalhador *th = new TrabalhadorPorHora("Sam", 0, 50);
    Trabalhador *ta = new TrabalhadorAssalariado("joao", 4500);

    cout<< "Pagamento semanal do trabalhador "<<th->getNome()<<": R$"<<th->calcularPagamentoSemanal(46)<<"\nEstimado Mensal: R$"<<th->getSalario()<<endl;

    cout<< "Pagamento semanal do trabalhador "<<ta->getNome()<<": R$"<<ta->calcularPagamentoSemanal(30)<<"\nEstimado Mensal: R$"<<ta->getSalario()<<endl;

    cout<<"deu certo"<<endl;

    return 0;
}