#include "../third_party/doctest.h"
#include "../include/produto.h"

TEST_CASE("Testa produto construtor"){
    Produto produto = Produto("Blusa nike", blusa, 1, 89.90, 1, "M", "Preto");
    CHECK_EQ(0, produto.get_tipo());
    CHECK_EQ("Blusa nike", produto.get_modelo());
    CHECK_EQ("M", produto.get_tamanho());
    CHECK_EQ(1, produto.get_codigo());
    CHECK_EQ("Preto", produto.get_cor());
    CHECK_EQ(1, produto._quantidade);
}

TEST_CASE("Testa função alterar quantidade"){
    Produto produto = Produto("Blusa nike", blusa, 1, 89.90, 3, "M", "Preto");
    produto.alterar_quantidade(1);
    CHECK_EQ(4, produto._quantidade);
}

