#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.h"
#include "cliente.h"

#include <map>
//métodos de pagamento.
enum Pagamento{
    cartao_credito, cartao_debito, boleto, pix, transferencia_bancaria
};
    //classe que gerencia os pedidos do site.
class Pedido
{
    //declara as informações privadas do TAD pedido
    private:
    //map que organiza os pedidos feitos, como um carrinho.
    std:: map<const Produto, unsigned int> _produtos_pedidos;

    public:
    Cliente _cliente;
    //adiciona um produto ao carrinho de compras.
    void adicionar_produto(Produto p, unsigned int qtd);
    //adiciona o cliente que está comprando.
    void adicionar_cliente( Cliente cliente);
    //imprime as informações do cliente e do carrinho de compras.
    void imprimir_carrinho();
    //retorna o valor do frete a ser pago.
    std:: string calcular_frete();
    //calcula o total da compra.
    double  calcular_total();
    //retorna a forma de pagamento selecionada.
    std:: string selecionar_pagamento(Pagamento forma_selecionada);

};
#endif
