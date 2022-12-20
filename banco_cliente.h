#ifndef  BANCO_CLIENTE_H
#define BANCO_CLIENTE_H
#include "cliente.h"
#include "excecoes.h"
#include "banco_dados.h"

#include <string>
#include <list>
//@class Banco_Cliente
class Banco_Cliente: public Banco_Dados
{
    private:

    std::list<Cliente> _banco_cliente;

    public:
    /* @brief função que simula um banco de clientes registrados no site
    */
    virtual void inicializa() override;
    /* @brief adiciona cliente ao registro do site
     * @param o Cliente cliente a ser adicionado
     */
    void adiciona_cliente(Cliente cliente);
    /* @brief caso o cliente esteja registrado no site, ele é retornado
     * @param string login do cliente
     */
    Cliente retorna_cliente(std::string login);
    /* @brief confere se o cliente esta ou nao ja registrado
     * @param string login do cliente testado
     * @return true retorna verdadeiro caso o login seja encontrado no banco de dados
     * @return false retorna verdadeiro caso o login nao seja encontrado no banco de dados
     */
    virtual bool confere_login(std::string login) override;


};


#endif
