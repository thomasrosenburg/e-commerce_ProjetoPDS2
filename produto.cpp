#include "../include/produto.h"
#include <iostream>
#include <iomanip>



Produto::Produto(std::string modelo,
Tipo tipo,
unsigned int codigo,
double preco, 
int quantidade, 
std::string tamanho, 
std::string cor):
_modelo(modelo),
_tipo(tipo), 
_codigo(codigo),
_tamanho(tamanho), 
_cor(cor),
_preco(preco),
_quantidade(quantidade)
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


void Produto:: imprimir_produto()
{

    std:: cout<<_modelo<< ", "
    <<conversao_tipo_string(_tipo)<<", "
    <<_cor<<", "
    <<_tamanho<<", "
    <<_codigo<<", "
    <<std::fixed
    <<std::setprecision(2)
    <<_quantidade<<" unidades, R$"
    <<_preco << std::endl;

}
std::string Produto:: conversao_tipo_string(Tipo tipo)
{
    if(tipo==1)
    {
        return "Blusa";
    
    }
   else if(tipo==2)
    {
        return "Calça";
    }
   else if(tipo==3)
    {
        return "Sapato";
    }
   else if(tipo==4)
    {
        return "Shorts";
    }
   else if(tipo==5)
    {
        return "Vestido";
    }
    else
    throw excecoes_conversao_string();
}

Tipo Produto::conversao_string_tipo(std:: string tipo)
{
    if(tipo=="Blusa")
    {
        return blusa;
    }
   else if(tipo=="Calça")
    {
        return calca;
    }
   else if(tipo=="Sapato")
    {
        return sapato;
    }
   else if(tipo=="Shorts")
    {
        return shorts;
    }
   else if(tipo=="Vestido")
    {
        return vestido;
    }
     else
     throw excecoes_conversao_string();
}
