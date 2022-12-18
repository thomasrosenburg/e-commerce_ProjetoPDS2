#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <list>
#include "produto.h"

class Estoque
{
    private:
    //lista de produtos que compõem o estoque da loja.
    std::list<Produto> lista_produtos;
   
    public:
     //essa função deverá ordenar e imprimir na tela os produtos do estoque na ordem crescente de preço.
    void ordena_preco(); 
    //adiciona um novo produto ao estoque.
    void adiciona_produto(Produto prod_novo);
    //retira um produto do estoque, por exemplo se o próprio esgotar.
    void retira_produto(Produto prod);
    // exibe apenas produtos do tipo blusa para o cliente.
    void exibir_blusa();
    // exibe apenas produtos do tipo short para o cliente.
    void exibir_shorts();
    // exibe apenas produtos do tipo sapato para o cliente.
    void exibir_sapatos();
    // exibe apenas produtos do tipo vestido para o cliente.
    void exibir_vestidos();
    // exibe apenas produtos do tipo calça para o cliente.
    void exibir_calca();
    //imprime na tela todos os produtos presentes no estoque
    void imprimir_todos();
    //função criada para encontrar um produto no estoque, pelo seu codigo
    Produto find_codigo(unsigned int codigo);
    //função criada para simular um banco de dados
    void inicializa_estoque();
    //funcão criada para conferir se o código dado é válido
    bool confere_codigo(unsigned int codigo);
    void retira_quant_no_estoque(int quant, Produto p);


};


#endif
