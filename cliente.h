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
    unsigned int _celular;
    //declara os métodos que o cliente pode executar.
    public:
    //constrói um cliente
    Cliente( std:: string nome, 
     std:: string login, 
     std::string email, 
     unsigned int celular, 
     unsigned int CEP,
     std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);
    //acessa a variável celular do cliente.
    unsigned int get_celular();
    //acessa a variável e-mail do cliente.
    std:: string get_email();
    //acessa a variável endereco do cliente.
    Endereco get_endereco();
    //imprime na tela as informações atreladas ao cliente.
    void imprime_cliente();
    //registra um e-mail para o cliente no site.
    void set_email(std::string);
    //registra um celular para o cliente no site.
    void set_celular(unsigned int cel);
    //registra um endereco para o cliente no site.
    void set_endereco(Endereco end);
    //determina o tipo de acesso que o cliente tem no site.
    virtual Acesso acesso_site() const override;

};



#endif
