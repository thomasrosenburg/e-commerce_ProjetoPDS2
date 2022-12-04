#include "pedido.h"
#include <iostream>

/* @brief função responsável por adicionar os produtos que o cliente deseja*/
void Pedido::adicionar_carrinho(Produto p, unsigned int quant)
{

    if(quant<=p.get_quantidade())
    {
        _produtos_pedidos.insert(std::make_pair(p, quant));

    }
    else 
    {
        std::cout<< "A quantidade selecionada para esse produto está indisponível."<<std:: endl;
    }

}

/*olhar como resolver isso aqui*/
void Pedido::adicionar_cliente( Cliente cliente)
{ 
    _cliente.set_nome(cliente.get_nome());
    _cliente.set_celular(cliente.get_celular());
    _cliente.set_login(cliente.get_login());
    _cliente.set_email(cliente.get_email());
    _cliente.set_endereco(cliente.get_endereco());
}

void Pedido::imprimir_carrinho()
{
    std::cout<<"Cliente:"<<std::endl;
    /*imprimir cliente*/

    std::cout<<"Pedido:"<<std::endl;
    /*imprimir pedido*/
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
/*olhar o que esta dando errado nessa função*/

double Pedido::calcular_total()
{
    double total=0;
    
    for(auto it=this->_produtos_pedidos.begin(); it!=this->_produtos_pedidos.end(); it++)
    {
        /*olhar como acessar primeiro elemento*/
        total=total+(*it).first._preco;
        
    }

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