#ifndef PRODUTO_H
#define PRODUTO_H

#include "excecoes.h"
#include <string>



/** @enum Tipo
 * @brief Tipo enum, corresponde aos tipos de roupa que o site contém
 */
enum Tipo
{
    blusa=1, ///< Tipo::blusa
    calca, ///<   Tipo::calca
    sapato, ///<  Tipo::sapato
    shorts, ///<  Tipo::shorts
    vestido ///<  Tipo::vestido

};
/**
 * @class Produto
 *
 * @brief Esta classe é responsável por criar o objeto produto
 * e introduzir as funções relativas a essa classe.
 */
class Produto
{
    //declara as características de um produto.
    private:

    std::string _modelo; ///< modelo do produto.
    Tipo _tipo; ///< O tipo do produto.
    unsigned int _codigo; ///< O código do produto. Essa variável é única para cada objeto.
    int _quantidade; ///< Quantidade do produto.
    std::string _tamanho; ///< O tamnanho do produto.
    std:: string _cor; ///< A cor do produto;
    

    public:
      /**
   * @brief Preço do produto.
   */
    double _preco;
    /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   *
   * @param modelo.
   * @param tipo.
   * @param _codigo.
   * @param preco.
   * @param quantidade.
   * @param tamanho.
   * @param cor
   */
    Produto(std::string modelo,Tipo tipo,unsigned int _codigo, double preco, int quantidade, std::string tamanho, std::string cor);
   /**
   * @brief  Responsavel por acessar a variável modelo do produto.
   * @return std:: string Retorna o modelo do produto.
   */
    std:: string get_modelo();
   /**
   * @brief  Responsavel por acessar a variável tipo do produto.
   * @return Tipo Retorna o tipo do produto.
   */
    Tipo get_tipo();
   /**
   * @brief  Responsavel por acessar a variável código do produto.
   * @return unsigned int Retorna o código do produto.
   */
    unsigned int get_codigo();
   /**
   * @brief  Responsavel por acessar a variável quantidade do produto.
   * @return int  Retorna a quantidade do produto.
   */
    int get_quantidade();
    /**
   * @brief  Responsavel por acessar a variável tamanho do produto.
   * @return std:: string Retorna o tamanho do produto.
   */
    std::string get_tamanho();
    /**
   * @brief  Responsavel por acessar a variável cor do produto.
   * @return std:: string Retorna a cor do produto.
   */
    std:: string get_cor();
   /**
   * @brief  Responsavel por imprimir na tela as informações do produto na tela.
   */
    void imprimir_produto();
    /**
    * @brief  Responsavel por converter uma variavel Tipo para uma string.
    * @param tipo Tipo que queremos converter para string.
    * @return std::string Retorna a string correspondente a aquele tipo
    */
    std::string conversao_tipo_string(Tipo tipo);
    /**
    * @brief  Responsavel por converter uma variavel string para uma variavel Tipo.
    * @param tipo std::string que queremos converter para Tipo.
    * @return Tipo Retorna o Tipo correspondente a aquele tipo
    */
    Tipo conversao_string_tipo(std::string tipo);


};

#endif
