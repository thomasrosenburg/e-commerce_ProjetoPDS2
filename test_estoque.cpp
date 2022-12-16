#include "estoque.h"
#include "doctest.h"

TEST_CASE("Testa estoque adicionar produto"){
   Estoque estoque;
   Produto p = Produto("Blusa nike", blusa, 1, 89.90, 3, "M", "Preto");
   CHECK_EQ(0, estoque.lista_produtos.size());//TEM QUE DEIXAR ESTOQUE PÚBLICO PARA TESTAR
   estoque.adiciona_produto(p);
   CHECK_EQ(1, estoque.lista_produtos.size());
}

TEST_CASE("Testa estoque retirar produto"){
   Estoque estoque;
   Produto p = Produto("Blusa nike", blusa, 1, 89.90, 3, "M", "Preto");
   CHECK_EQ(0, estoque.lista_produtos.size());
   estoque.adiciona_produto(p);
   CHECK_EQ(1, estoque.lista_produtos.size());
   estoque.retira_produto(p);
   CHECK_EQ(0, estoque.lista_produtos.size());
}

