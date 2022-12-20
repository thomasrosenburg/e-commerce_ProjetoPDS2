#ifndef CLIENTE_H
#define CLIENTE_H

#include "endereco.h"
#include "usuario.h"
/**
 * @class Cliente
 *
 * @brief Esta classe é uma subclasse de Usuario e é responsável por criar o objeto cliente
 * e introduzir as funções relativas a essa classe.
 */
class Cliente:public Usuario
{  
    private:
    std::string _email; ///< O email do cliente;
    Endereco _endereco; ///< O endereço do cliente; 
    std::string _celular; ///< O celular do cliente

    public:
     /**
     * @brief Contrutor padrao que inicializa todas as variaveis privadas da
     * classe.
     */
    Cliente(std:: string nome, 
     std:: string login, 
     std::string email, 
     std::string celular, 
     std::string CEP,
     std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);
    
     /**
     * @brief Contrutor default que inicializa o cliente.
     */
    Cliente();
      /**
     * @brief Responsável por determinar o acesso do cliente ao site.
     * @return Acesso Retorna o tipo de acesso que o cliente tem.
     */
    virtual Acesso acesso_site() override;
     /**
     * @brief Responsável por acessar a variável celular do cliente.
     * @return std::string Retorna o celular.
     */
    std::string get_celular();
     /**
     * @brief Responsável por acessar a variavel email do cliente.
     * @return std::string Retorna o email.
     */
    std:: string get_email();
     /**
     * @brief Responsável por acessar a variável endereço do cliente.
     * @return Endeeco Retorna o endereço.
     */
    Endereco get_endereco();
    /**
    * @brief Responsável por  imprimir na tela as informações relacionadas ao cliente.
    */
    void imprime_cliente();
     /**
     * @brief Responsável por registrar um e-mail para o cliente no site.
     * @param email Email que será implementado ao cliente.
     */
    void set_email(std::string email);
     /**
     * @brief Responsável por registrar um celular para o cliente no site.
     * @param cel Celular que será implementado ao cliente.
     */
    void set_celular(std::string cel);
     /**
     * @brief Responsável por registrar um endereco para o cliente no site.
     * @param end Endereco que será implementado ao cliente.
     */
    void set_endereco(Endereco end);
  
  

};



#endif
