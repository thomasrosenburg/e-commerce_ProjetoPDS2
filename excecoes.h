#ifndef EXCECOES_H
#define EXCECOES_H

#include<iostream>
using namespace std;
/**
 * @class excecoes_login_cliente
 *
 * @brief Esta classe é responsável lançar exceção quando o login 
 * digitado nao estiver registrado no banco de dados.
 */

class excecoes_login_cliente :public exception

{
    public:
    virtual const char* what() const noexcept override;
    
};
/**
 * @class excecoes_operacoes
 *
 * @brief Esta classe é responsável lançar exceção quando a
 * operacao realizada e incompativel.
 */
class excecoes_operacoes :public exception
{
    public:
    virtual const char* what() const noexcept override;
};
/**
 * @class excecoes_codigo
 *
 * @brief Esta classe é responsável lançar exceção quando o codigo
 * digitado nao estiver registrado no banco de dados.
 */
class excecoes_codigo : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
/**
 * @class excecoes_categoria
 *
 * @brief Esta classe é responsável lançar exceção quando a categoria 
 * digitada for incompativel.
 */
class excecoes_categoria : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
/**
 * @class excecoes_quuantidade
 *
 * @brief Esta classe é responsável lançar exceção quando a 
 * quantidade digitada for incompativel.
 */
class excecoes_quantidade : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
/**
 * @class excecoes_conversao_string
 *
 * @brief Esta classe é responsável lançar exceção quando a string
 * digitada for incompativel aos estados.
 */
class excecoes_conversao_string : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
/**
 * @class excecoes_conversao_estado
 *
 * @brief Esta classe é responsável lançar exceção quando o estado
 * digitado for incompativel.
 */
class excecoes_conversao_estado : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
#endif
