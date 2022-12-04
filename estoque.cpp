#include "estoque.h"
#include <string.h>

void Estoque::adiciona_produto(Produto prod_novo)
{
    unsigned int chave= prod_novo.get_codigo();
    int aux=0;
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
        if((*it).get_codigo()==chave)
        {
            (*it).alterar_quantidade(prod_novo.get_quantidade());
            aux++;
        }
    }

    if(aux==0)
    {
        lista_produtos.emplace_back(prod_novo);
    }

}

void Estoque::retira_produto(Produto prod)
{
    unsigned int chave= prod.get_codigo();
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
        if((*it).get_codigo()==chave)
    { 
        lista_produtos.remove(*it);
    }
    }
}

void Estoque::imprimir_todos()
{
    for (auto it = lista_produtos.begin(); it != lista_produtos.end(); it++)
    {
        (*it).imprimir_produto();
    }
}
bool comparacao(Produto prod1, Produto prod2)
{
    return(prod1._preco<prod2._preco);
}
void Estoque::ordena_preco()
{

    lista_produtos.sort(comparacao);

    imprimir_todos();

};

void Estoque::exibir_blusa()
{
    /*sabendo que a loja é composta apenas por blusa, calça, vestido, shorts, sapato, vamos classificar*/

    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
        
        if((*it).get_tipo()==0)
        {
            (*it).imprimir_produto();
        }
    }
}
void Estoque::exibir_calca()    
{ 
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
    if((*it).get_tipo()==1)
        {
            (*it).imprimir_produto();
        }
    }
}

void Estoque:: exibir_sapatos()
{
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
    if((*it).get_tipo()==2)
        {
            (*it).imprimir_produto();
        }
    }
}

void Estoque:: exibir_shorts()
{
for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
{
if((*it).get_tipo()==3)
        {
            (*it).imprimir_produto();
        }
}
}     
void Estoque:: exibir_vestidos()
{ for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
{
if((*it).get_tipo()==4)
        {
            (*it).imprimir_produto();
        }
}
}

