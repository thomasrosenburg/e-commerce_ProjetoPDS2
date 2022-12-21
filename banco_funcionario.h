#ifndef BANCO_FUNCIONARIOS
#define BANCO_FUNCIONARIOS 

#include "funcionario.h"
#include "banco_dados.h"
#include <string>
#include <string.h>
#include <list>
#include <iostream>
/**
 * @class Banco_Funcionario
 *
 * @brief Esta classe é responsável por simular um banco de dados
 * de funcionarios e  introduzir as funções relativas a essa classe.
 */


class Banco_Funcionario: public Banco_Dados
{
    private:
    /**
     *@brief lista de funcionários da loja.
     */
    std::list<Funcionario> _banco_funcionarios;
    
    public:
    /**
     *@brief adiciona um novo cadastro de funcionário.
     *@param nome Nome do novo funcionário.
     *@param login Login do novo funcionario.
     *@param registro Registro do novo funcionario.
     */
    void adiciona_funcionario(std:: string nome, std:: string login, unsigned int registro);
    /**
     *@brief confere se o login está na lista.
     *@param login Login fornecido.
     */
    virtual bool confere_login(std::string login) override;
    /**
     *@brief inicializa o banco de dados de funcionarios.
     * Essa classe concretiza a funcao virtual herdada da
     * superclasse Banco_Dados.
     */
    virtual void inicializa() override;


};

#endif
