#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(void)
{
    Funcionario *f1 = new Funcionario(12345, "fulano de sicrano", 1500);
    Funcionario *c1 = new Consultor(54321, "joao doe", 1500);

    cout<<"salario do funcionario "<<f1->getNome()<<" eh R$"<<f1->getSalario()<<endl;
    cout<<"salario do consultor "<<c1->getNome()<<" eh R$"<<c1->getSalario()<<endl;
    cout<<"salario do consultor "<<c1->getNome()<<" com acrescimo de 50%: R$"<<c1->getSalario(50)<<endl;

    return 0;
}