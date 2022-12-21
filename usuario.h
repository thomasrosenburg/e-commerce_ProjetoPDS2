#ifndef USUARIO_H
#define USUARIO_H

#include <string>
/** @enum Acesso
 * @brief Acesso enum, caracteriza o tipo de acesso, para futuramente filtrar as funções que este pode executar no site.
 */
enum Acesso{AMPLO, RESTRITO};
/**
 * @class Usuario
 *
 * @brief Esta classe é responsável por criar o objeto usuario
 * e introduzir as funções relativas a essa classe.
 */
class Usuario{
    
    private:
  
     std:: string _nome;///< Nome do usuario
    
     std:: string _login; ///< login do usuario
  
    public:
    /**
    *@brief constroi um usuario
    *@param _nome Nome do usuario
    *@param _login Login do usuario
    */
    Usuario(
        std::string _nome,
        std:: string _login
        );
    /**
    * @brief acessa o nome do usuário.
    * @return std::string Retorna o nome.
    */
    std:: string get_nome();
    /**
    *@brief acessa o login do usuário.
    *@return std::string Retorna login.
    */
    std:: string get_login();
    /**
    *@brief determina o tipo de acesso que o usuáiro tem no site.
    * Este metodo deve ser implementado pela classe concreta.
    */
    virtual Acesso acesso_site()=0;
    /**
    *@brief registra um nome para o usuário.
    *@param nome Nome do usuario.
    */
     void set_nome(std:: string nome);
    /**
    * @brief registra um login para o usuário.
    * @param login Login do usuario
    */
     void set_login(std:: string login);
};


#endif
