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
        if(it->get_codigo()==chave)
    { 
        it = lista_produtos.erase((it));
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



void Estoque::ordena_preco()
{

   lista_produtos.sort([](const Produto &prod1, const Produto &prod2)
        { 
                if(prod1._preco==prod2._preco)
                    { return prod1._preco<prod2._preco;}
        return prod1._preco<prod2._preco;
        });
   

   imprimir_todos();

} 

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

Produto Estoque:: find_codigo(unsigned int codigo)
{
    if(confere_codigo(codigo)==true)
{
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
        if((*it).get_codigo()==codigo)
        {
            return (*it);
        }
    }
        else
        { throw excecoes_codigo();
        }
}
    
bool Estoque:: confere_codigo(unsigned int codigo)
{
    for(auto it=lista_produtos.begin(); it!=lista_produtos.end(); it++)
    {
        if((*it).get_codigo()==codigo)
        {
            return true;
        }
        else
        return false;
    }
}

void Estoque::inicializa_estoque()
{

    adiciona_produto(Produto("Cropped",blusa,20267, 50.00, 25, "P", "preto"));
    adiciona_produto(Produto("Cropped",blusa, 20268,50.00, 30, "M", "preto"));
    adiciona_produto(Produto("Cropped",blusa, 20269, 50.00, 15, "G", "preto"));
    adiciona_produto(Produto("Blusa Manga Comprida",blusa, 20777, 75.00, 25, "M", "azul"));
    adiciona_produto(Produto("Regata",blusa,2980, 30.00, 25,"G", "branca"));
    adiciona_produto(Produto("Regata",blusa,2981, 30.00, 67, "M", "branca"));
    adiciona_produto(Produto("Camiseta",blusa, 2997, 35.00, 25,"P", "azul"));
    adiciona_produto(Produto("Camiseta",blusa, 2999, 35.00, 100, "G", "azul"));
    adiciona_produto(Produto("Bota", sapato,1234, 100.00, 17, "36", "preta"));
    adiciona_produto(Produto("Bota", sapato, 1235, 100.00, 25, "37", "preta"));
    adiciona_produto(Produto("Calça Jeans", calca, 4532, 125.00, 1, "M", "azul"));
    adiciona_produto(Produto("Calça Jeans", calca, 4533, 125.00, 2, "M"," preta"));
    adiciona_produto(Produto("Tênis", sapato, 1256, 150.00, 4, "40", "branco"));
    adiciona_produto(Produto("Tênis", sapato, 1257, 150.00, 8, "42", "preto"));
    adiciona_produto(Produto("Shorts saia", shorts, 3890, 50.00, 23, "M", "verde"));
    adiciona_produto(Produto("Shorts academia", shorts, 3891, 45.00, 2, "G", "lilás"));
    adiciona_produto(Produto("Shorts Jeans", shorts, 3892, 65.00,8, "M", "azul"));
    adiciona_produto(Produto("Vestido Longo", vestido, 7896, 120.00, 2, "P", "vermelho"));
    adiciona_produto(Produto("Vestido tubinho", vestido, 7988, 80.00, 8, "M", "preto"));
    adiciona_produto(Produto("Vestido tubinho", vestido, 7999, 85.00, 9, "G", "branco"));
}
