#include "Endereco.h"
#include <iostream>
#include <string>

using namespace std;

Endereco::Endereco()
{
    rua = "ND";
    numero = "0";
    bairro = "ND";
    cidade = "ND";
    estado = "ND";
    cep = "0";
    //ctor
}

Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep)
        : Endereco()
{   
    setRua(rua);
    setNumero(numero);
    setBairro(bairro);
    setCidade(cidade);
    setEstado(estado);
    setCep(cep);   
    //sets
}

string Endereco::toString()
{
    string total;
    total = rua + ", " + numero + ", " + bairro + ", " + cidade + ", " + estado + ", " + cep;

    return total;
}

string Endereco::getRua()
{
    return rua;
}

string Endereco::getNumero()
{
    return numero;
}

string Endereco::getBairro()
{
    return bairro;
}

string Endereco::getCidade()
{
    return cidade;
}

string Endereco::getEstado()
{
    return estado;
}

string Endereco::getCep()
{
    return cep;
}

void Endereco::setRua(string rua)
{
    this->rua = rua;
}

void Endereco::setNumero(string numero)
{
    this->numero = numero;
}

void Endereco::setBairro(string bairro)
{
    this->bairro = bairro;
}

void Endereco::setCidade(string cidade)
{
    this->cidade = cidade;
}

void Endereco::setEstado(string estado)
{
    this->estado = estado;
}

void Endereco::setCep(string cep)
{
    this->cep = cep;
}