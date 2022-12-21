#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "usuario.h"
/**
 * @class Funcionario
 *
 * @brief Esta classe é responsável por criar o objeto responsavel
 * e introduzir as funções relativas a essa classe.
 */
class Funcionario: public Usuario{
    private:
   
    unsigned int _registro;  ///< o registro do funcionario.
    public:
    /**
    * @brief Construtor padrao de um funcionario
    * @param _nome Nome do funcionario
    * @param login Login do funcionario
    * @param _registro Registro do funcionario
    */
    Funcionario(std:: string _nome, std:: string login, unsigned int _registro);
    /**
    * @brief acessa a variavel registro
    * @return unsigned int retorna o registro
    */
    unsigned int get_registro();
    /**
    * @brief Caracteriza o acesso ao site
    * @return string retorna o tipo de acesso que o funcionario tem
    */
    virtual Acesso acesso_site() override;
};

#endif 
