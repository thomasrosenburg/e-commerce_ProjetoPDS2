#ifndef  BANCO_CLIENTE_H
#define BANCO_CLIENTE_H
#include "cliente.h"
#include "excecoes.h"
#include "banco_dados.h"

#include <string>
#include <list>
/**
 * @class Banco_Cliente
 *
 * @brief Esta classe é responsável simular um banco de dados de cliente
 * e introduzir funcoes relacionadas a esse banco.
 */
class Banco_Cliente: public Banco_Dados
{
    private:
   /**
   * @brief Lista de Clientes que representa o banco de dados.
   */

    std::list<Cliente> _banco_cliente;

    public:
    /**
    * @brief função que simula um banco de clientes registrados no site. 
    * Essa funcao concretiza o metodo virtual da classe Banco_Dados.
    */
    virtual void inicializa() override;
    /**
    * @brief adiciona cliente ao registro do site
    * @param cliente Objeto Cliente que será adicionado ao banco de dados.
    */
    void adiciona_cliente(Cliente cliente);
    /**
     * @brief caso o cliente esteja registrado no site, ele é retornado
     * @param std::string login do cliente
     * @return Cliente Retorna o cliente que corresponde a aquele login.
     */
    Cliente retorna_cliente(std::string login);
    /**
     * @brief confere se o cliente esta ou nao ja registrado
     * @param string login do cliente testado.
     * @return false retorna verdadeiro caso o login nao seja encontrado no banco de dados
     */
    virtual bool confere_login(std::string login) override;


};


#endif
