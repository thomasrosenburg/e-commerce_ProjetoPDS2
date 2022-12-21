#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <list>
#include "produto.h"
/**
 * @class Estoque
 *
 * @brief Esta classe é responsável por criar o estoque
 * e introduzir as funções para administrar essa classe.
 */
class Estoque
{
    private:
   /**
   * @brief lista de produtos que compõem o estoque da loja.
   */
    std::list<Produto> lista_produtos;
   
    public:
   /**
   * @brief ordena e imprime na tela os produtos do estoque na ordem crescente de preço.
   */
    void ordena_preco(); 
    /** 
     *@brief adiciona um novo produto ao estoque.
     * @param prod_novo Produto novo a ser adicionado.
     */
    void adiciona_produto(Produto prod_novo);
    /** 
     *@brief retira um produto do estoque, por exemplo se o próprio esgotar.
     * @param prod Produto a ser retirado
     */
    void retira_produto(Produto prod);
     /** 
     *@brief exibe apenas produtos do tipo blusa para o cliente.
     */
    void exibir_blusa();
     /** 
     *@brief exibe apenas produtos do tipo short para o cliente.
     */
    void exibir_shorts();
     /** 
     *@brief exibe apenas produtos do tipo sapato para o cliente.
     */ 
    void exibir_sapatos();
    /** 
     *@brief exibe apenas produtos do tipo vestido para o cliente.
     */
    void exibir_vestidos();
     /** 
     *@brief exibe apenas produtos do tipo calca  para o cliente.
     */
    void exibir_calca();
    /** 
     *@brief exibe todos os produtos do estoque.
     */
    void imprimir_todos();
    /**
    *@brief função criada para encontrar um produto no estoque, pelo seu codigo.
    *@param codigo Codigo do produto.
    */
    Produto find_codigo(unsigned int codigo);
     /** 
     *@brief função criada para simular um banco de dados.
     */
    void inicializa_estoque();
    /**
    *@brief  confere se o código dado é válido
    *@param codigo Codigo do produto conferido
    *@return true Retorna verdadeiro caso o código seja correspondido a um produto
    *@return false Retorna falso caso o código não corresponda a um produto
    */
    bool confere_codigo(unsigned int codigo);
    /**
    *@brief retira uma quantidade do produto no estoque
    *@param quant Quantidade do produto
    *@param p Produto
    */
    void retira_quant_no_estoque(int quant, Produto p);
    void alterar_quantidade_produto(int quant, unsigned int codigo);


};


#endif
