#include "produto.h"
#include <iostream>



Produto::Produto(std::string modelo,
Tipo tipo,
unsigned int codigo,
double preco, 
unsigned int quantidade, 
std::string tamanho, 
std::string cor):
_modelo(modelo),
_tipo(tipo), 
_codigo(codigo),
_preco(preco),
_quantidade(quantidade),
_tamanho(tamanho), 
_cor(cor)
{

};

std:: string Produto::get_modelo()
{
    return _modelo;
};
Tipo Produto::get_tipo() 
{
    return _tipo;
};

unsigned int Produto::get_quantidade()
{
    return _quantidade;
};
unsigned int Produto::get_codigo()
{
    return _codigo;
}

std::string Produto::get_tamanho()
{
    return _tamanho;
}
std:: string Produto::get_cor()
{
    return _cor;
}

void Produto:: alterar_quantidade(unsigned int quant)
{
    _quantidade=_quantidade-quant;
}

void Produto:: imprimir_produto()
{

    std:: cout<<_modelo<< ", "
    <<_tipo<<", "
    <<_cor<<", "
    <<_tamanho<<", "
    <<_codigo<<", R$"
    <<_preco;
}
