#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "usuario.h"
//@class Funcionario
class Funcionario: public Usuario{
    private:
    ///< o registro do funcionario
    unsigned int _registro;
    public:
    /**
    * @brief constroi um funcionario
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
