#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <list>
#include "produto.h"

class Estoque
{
    private:
    std::list<Produto> lista_produtos;

    void ordena_preco(); 
    void adiciona_produto(Produto prod_novo);
    void retira_produto(Produto prod);
    void exibir_blusa();
    void exibir_shorts();
    void exibir_sapatos();
    void exibir_vestidos();
    void exibir_calca();
    void imprimir_todos();
    bool comparacao(Produto prod1, Produto prod2);


};


#endif
