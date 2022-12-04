#include "venda.h"

void Venda::realiza_pedido(Pedido p)
{
    pedidos_loja.emplace_back(p);
}

void Venda::imprime_relatorio()
{
    for(auto it=pedidos_loja.begin(); it!=pedidos_loja.end(); it++)
    {
        (*it).imprimir_carrinho();
    }
}