#include "../include/pedido.h"
#include <iostream>
#include <iomanip>

/* função responsável por adicionar os produtos que o cliente deseja*/

void Pedido::adicionar_produto(Produto p, int quant)
{
if(quant<0)
throw excecoes_quantidade();
    if(quant<=p._quantidade)
    {

        for(int i=0; i<quant; i++)
        {
            _produtos_pedidos.push_back(p);
        }
    }
    else
     {
        throw excecoes_quantidade();
    }

} 

void Pedido::adicionar_cliente( Cliente cliente)
{ 
    cliente.set_nome(cliente.get_nome());
    cliente.set_celular(cliente.get_celular());
    cliente.set_login(cliente.get_login());
    cliente.set_email(cliente.get_email());
    cliente.set_endereco(cliente.get_endereco());
} 

void Pedido::imprimir_carrinho()
{
    std::cout<<"Pedido:"<<std::endl;
    //imprimir pedido
   for(auto it= _produtos_pedidos.begin(); it!= _produtos_pedidos.end(); it++)
{
    std:: cout<<(*it).get_modelo()<< ", "
    <<(*it).get_cor()<<", "
    <<(*it).get_tamanho()<<", "
    <<std::fixed
    <<std::setprecision(2)
    <<" R$"
    <<(*it)._preco << std::endl;
} 
} 

std::string  Pedido::calcular_frete()
{
    if(_cliente.get_endereco().get_estado()>=0 && _cliente.get_endereco().get_estado()<=6)
    {
        return "A taxa de entrega custará R$15,00 e o prazo de entrega são 5 dias úteis.\n";
    }
     if(_cliente.get_endereco().get_estado()>=7 && _cliente.get_endereco().get_estado()<=9)
        {
            return "A taxa de entrega custará R$ 20,00 e o prazo de entrega são 7 dias úteis.\n";
        }
        if(_cliente.get_endereco().get_estado()>=10 && _cliente.get_endereco().get_estado()<=18)
    {
        return "A taxa de entrega custará R$ 25,00 e o prazo de entrega são 10 dias úteis.\n";
    }
    if(_cliente.get_endereco().get_estado()>=19 && _cliente.get_endereco().get_estado()<=25)
    {
        return " A taxa de entrega custará R$ 30,00 e o prazo de entrega são 15 dias úteis.\n";
    }

        return "Endereço não disponível para entrega\n";
}

double Pedido::calcular_total()
{
    double total=0;
    
    for(auto it=this->_produtos_pedidos.begin(); it!=this->_produtos_pedidos.end(); it++)
    {
        
        total=total+(*it)._preco;
        
    }
    return total;
}

std::string Pedido:: selecionar_pagamento(Pagamento forma_selecionada)
{
    if(forma_selecionada==0)
    {
        return "Você selecionou: Cartão de crédito.\n";
    }
    if(forma_selecionada==1)
    {
        return "Você selecionou: Cartão de débito\n";
    }
    if(forma_selecionada==2)
    {
        return "Você selecionou: Boleto\n";
    }
    if(forma_selecionada==3)
    {
        return "Você selecionou: Pix\n";
    }
    if(forma_selecionada==4)
    {
        return "Você selecionou: Transferência bancária\n";
    }

    return "Forma de pagamento selecionada indisponível\n";
} 

Pedido::Pedido(){
    
}
