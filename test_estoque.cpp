#include "../include/estoque.h"
#include "../third_party/doctest.h"

TEST_CASE("Testa estoque adiciona produto")
{
    Estoque estoque;
    Produto produto = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    estoque.adiciona_produto(produto);
    Produto auxiliar = estoque.find_codigo(1);
    CHECK_EQ(auxiliar.get_tipo(), produto.get_tipo());
    CHECK_EQ(auxiliar.get_modelo(), produto.get_modelo());
    CHECK_EQ(auxiliar.get_tamanho(), produto.get_tamanho());
    CHECK_EQ(auxiliar.get_codigo(), produto.get_codigo());
    CHECK_EQ(auxiliar.get_cor(), produto.get_cor());
    CHECK_EQ(auxiliar._quantidade, produto._quantidade);
    CHECK_THROWS_WITH(estoque.find_codigo(13), "produto não encontrado!");
}

TEST_CASE("Testa estoque retira produto")
{
    Estoque estoque;
    Produto produto = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    estoque.adiciona_produto(produto);
    Produto auxiliar = estoque.find_codigo(1);
    CHECK_EQ(auxiliar.get_tipo(), produto.get_tipo());
    CHECK_EQ(auxiliar.get_modelo(), produto.get_modelo());
    CHECK_EQ(auxiliar.get_tamanho(), produto.get_tamanho());
    CHECK_EQ(auxiliar.get_codigo(), produto.get_codigo());
    CHECK_EQ(auxiliar.get_cor(), produto.get_cor());
    CHECK_EQ(auxiliar._quantidade, produto._quantidade);
    estoque.retira_produto(produto);
    bool checar = estoque.confere_codigo(1);
    CHECK_EQ(checar, false);
}

