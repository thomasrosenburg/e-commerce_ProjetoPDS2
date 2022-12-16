#include "doctest.h"
#include "pedido.h"

TEST_CASE("Testa calcular total"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido;
    pedido.adicionar_cliente(cliente);
    pedido.adicionar_produto(produto1);
    pedido.adicionar_produto(produto2);
    double total = pedido.calcular_total();
    CHECK_EQ(199.8, total);
}

TEST_CASE("Testa calcular frete"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido;
    pedido.adicionar_cliente(cliente);
    pedido.adicionar_produto(produto1);
    pedido.adicionar_produto(produto2);
    std::string frete = pedido.calcular_frete();
    std::string comp_frete = "A taxa de entrega custará R$15,00 e o prazo de entrega são 5 dias úteis.\n";
    CHECK_EQ(frete, comp_frete);
}

TEST_CASE("Testa selecionar pagamento"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido;
    pedido.adicionar_produto(produto1);
    pedido.adicionar_produto(produto2);
    pedido.adicionar_cliente(cliente);
    std::string pagamento = pedido.selecionar_pagamento(cartao_credito);
    CHECK_EQ(0, "Você selecionou: Cartão de crédito.\n");
}
