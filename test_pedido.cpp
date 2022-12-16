#include "doctest.h"
#include "pedido.h"
//Rever testes
/* TEST_CASE("Testa calcular total"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido;
    pedido.adicionar_produto(produto1, 1);
    pedido.adicionar_produto(produto2, 1);
    double total = pedido.calcular_total();
    CHECK_EQ(199.8, total);
} 

TEST_CASE("Testa calcular frete"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido = Pedido();
    pedido.adicionar_cliente(cliente);
    pedido.adicionar_produto(produto1, 1);
    pedido.adicionar_produto(produto2, 1);
    std::string frete = pedido.calcular_frete();
    std::string comp_frete = "A taxa de entrega custará R$15,00 e o prazo de entrega são 5 dias úteis.\n";
    CHECK_EQ(frete, comp_frete);
}

TEST_CASE("Testa selecionar pagamento"){
    Produto produto1 = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    Produto produto2 = Produto("Blusa adidas", blusa, 1, 109.90, 1, "M", "Preto");
    Cliente cliente = Cliente("Joseane", "jm1989", "jm@gmail.com", "31913121989",
                               "31710400", "Belo Horizonte", MG, 21, 113);
    Pedido pedido = Pedido();
    pedido.adicionar_produto(produto1, 1);
    pedido.adicionar_produto(produto2, 1);
    pedido.adicionar_cliente(cliente);
    std::string pagamento = pedido.selecionar_pagamento(cartao_credito);
    std::string comp_pagamento = "Você selecionou: Cartão de crédito.\n";
    CHECK_EQ(pagamento, comp_pagamento);
} */
