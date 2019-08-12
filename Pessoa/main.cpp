#include <iostream>
#include <string>
#include "Endereco.h"
#include "Pessoa.h"

using namespace std;

int main(void)
{
    Endereco e1 = Endereco("rua joao galbino", "80", "13 de maio", "joao pessoa", "PB", "91283");
    Endereco e2 = Endereco("rua gov marcelo lins...", "08", "bessa", "joao pessoa", "PB", "91332");
    
    Pessoa *p1 = new Pessoa("Samuel Albuquerque", e1, "96057740"); 
    Pessoa *p2 = new Pessoa("Silas", e2, "96053344"); 

    cout<<"nome: "<<p1->getNome()<<" endereco: "<<e1.toString()<<" telefone: "<<p1->getTelefone()<<endl;
    cout<<"nome: "<<p2->getNome()<<" endereco: "<<e2.toString()<<" telefone: "<<p2->getTelefone()<<endl;

    return 0;
}