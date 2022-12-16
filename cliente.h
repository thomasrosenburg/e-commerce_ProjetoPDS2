#ifndef CLIENTE_H
#define CLIENTE_H

#include "endereco.h"
#include "usuario.h"
//subclasse da classe Usuario
class Cliente:public Usuario
{   /*declaração das informações privadas do cliente
    note que o nome e o login foram herdados da classe Usuario.
*/
    private:
    std::string _email;
    Endereco _endereco; 
    std::string _celular;
    //declara os métodos relacionados a classe cliente.
    public:
    //constrói um cliente
    Cliente(std:: string nome, 
     std:: string login, 
     std::string email, 
     std::string celular, 
     std::string CEP,
     std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);
    //determina o acesso do cliente ao site 
    virtual Acesso acesso_site() override;
    //acessa a variável celular do cliente.
    std::string get_celular();
    //acessa a variável e-mail do cliente.
    std:: string get_email();
    //acessa a variável endereco do cliente.
    Endereco get_endereco();
    //imprime na tela as informações atreladas ao cliente.
    void imprime_cliente();
    //registra um e-mail para o cliente no site.
    void set_email(std::string email);
    //registra um celular para o cliente no site.
    void set_celular(std::string cel);
    //registra um endereco para o cliente no site.
    void set_endereco(Endereco end);
    //determina o tipo de acesso que o cliente tem no site.
    virtual Acesso acesso_site() const override;

};



#endif
