#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include <string>

using namespace std;

class Trabalhador
{
    public:
        Trabalhador();

        void setNome(string nome);
        void setSalario(double salario);

        virtual double getValorDaHora();
        virtual void setValorDaHora(double valorDaHora);
        virtual double calcularPagamentoSemanal(int horas);

        string getNome();
        double getSalario();

    protected:
        string nome;
        double salario;

};



#endif //TRABALHADOR_H