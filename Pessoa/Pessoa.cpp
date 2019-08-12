#include "Endereco.h"
#include "Pessoa.h" 
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(string nome)
{
    setNome(nome);
    telefone = "0000-0000";
    endereco = Endereco();
    //ctor
}

Pessoa::Pessoa(string nome, Endereco e, string telefone)
{
    setNome(nome);
    setTelefone(telefone);
    setEndereco(e);
    //sets
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void Pessoa::setEndereco(Endereco e)
{
    endereco.setRua(e.getRua());
    endereco.setNumero(e.getNumero());
    endereco.setBairro(e.getBairro());
    endereco.setCidade(e.getCidade());
    endereco.setEstado(e.getEstado());
    endereco.setCep(e.getCep());
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}

string Pessoa::getEndereco()
{
    return endereco.toString();
}