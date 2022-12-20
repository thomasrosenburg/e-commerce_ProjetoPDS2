#ifndef PEDIDO_H
#define PEDIDO_H

#include "produto.h"
#include "cliente.h"


#include <list>

/** @enum Pagamento
 * @brief Pagamento enum, corresponde aos tipos de pagamento disponível.
 */
enum Pagamento{
    cartao_credito, cartao_debito, boleto, pix, transferencia_bancaria
};
/**
 * @class Pedido
 *
 * @brief Esta classe é responsável por organizar os produtos escolhidos 
 * pelo cliente.
 */
class Pedido
{
    
    private:
    /**
   * @brief Lista de Produtos selecionados pelo cliente para compor 
   * seu carrinho.
   */
    std:: list<Produto> _produtos_pedidos;

    public:
   /**
   * @brief Cliente correspondente a aquele carrinho.
   */
    Cliente _cliente;
    
   /**
   * @brief Construtor default do pedido.
   */
    Pedido();
    
   /**
   * @brief Responsavel por adicionar produtos ao carrinho.
   * @param p Produto que será adicionado ao carrinho.
   * @param qtd quantidade desejada a ser adicionada ao carrinho.
   */
    void adicionar_produto(Produto p, int qtd);
    
   /**
   * @brief Responsavel por adicionar o cliente que está comprando ao pedido.
   *@param cliente Cliente que será adicionado ao pedido,
   */
    void adicionar_cliente( Cliente cliente);
   /**
   * @brief Responsavel por imprimir os produtos do carrinho.
   */
    void imprimir_carrinho();
    
   /**
   * @brief Responsavel por retornar o preço do frete a ser pago pelo cliente
   * e o tempo de entrega.
   * @return std::string Retorna uma string que contém o frete e o prazo de
   *entrega.
   */
    std:: string calcular_frete();
    
   /**
   * @brief Responsavel por calcular o valor total a ser pago pelo cliente.
   * @return double Retorna a soma dos precos dos produtos contidos no carrinho.
   */
    double  calcular_total();
    
   /**
   * @brief Responsavel por selecionar a forma de pagamento.
   * @param forma_selecionada Pagamento selecionado pelo cliente.
   * @return std::string Retorna a string de acordo com a forma de pagamento
   *selecionada.
   */
    std:: string selecionar_pagamento(Pagamento forma_selecionada);

};
#endif
