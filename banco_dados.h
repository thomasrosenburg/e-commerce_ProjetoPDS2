#ifndef BANCO_DADOS_H
#define BANCO_DADOS_H

#include <string>

/**
* @class Banco_Dados
*
* @brief Classe responsável por inicializar as funções que serão utilizadas no 
* banco de dados dos clientes e dos funcionários.
*/

class Banco_Dados{
    public:
   /**
   * @brief Inicializa o banco com alguns exemplos.
   *  Este metodo deve ser implementado pela classe concreta. Cada classe
   *  concreta pode usar objetos diferentes para inicializar seu banco de dados.
   */
    virtual void inicializa()=0;
    /**
   * @brief Confere se o login informado está no banco de dados, seja ele cliente ou funcionário.
   *  Este metodo deve ser implementado pela classe concreta. Cada classe
   *  concreta pode usar metodos  diferentes para encontrar no seu banco de dados.
   *  
   *
   * @param login Instancia std:: string que será procurado no banco de dados.
   *
   *@ return true Retorna verdadeiro quando o login é encontrado no banco de dados.
   */
    virtual bool confere_login(std::string login)=0;
};
#endif
