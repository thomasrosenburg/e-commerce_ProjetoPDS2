#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.h"
#include "cliente.h"

#include <map>

enum Pagamento{
    cartao_credito, cartao_debito, boleto, pix, transferencia_bancaria
};

class Pedido
{
    private:

    std:: map<const Produto, unsigned int> _produtos_pedidos;

    public:
    Cliente _cliente;

    void adicionar_carrinho(Produto p, unsigned int qtd);
    void adicionar_cliente( Cliente cliente);
    void imprimir_carrinho();
    std:: string calcular_frete();
    double  calcular_total();
    std:: string selecionar_pagamento(Pagamento forma_selecionada);

};
#endif