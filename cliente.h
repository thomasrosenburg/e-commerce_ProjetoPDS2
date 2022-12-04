#ifndef CLIENTE_H
#define CLIENTE_H

#include "endereco.h"
#include "usuario.h"

class Cliente:public Usuario
{
    private:
    std::string _email;
    Endereco _endereco; 
    unsigned int _celular;

    public:

    Cliente( std:: string nome, 
     std:: string login, 
     std::string email, 
     unsigned int celular, 
     unsigned int CEP,
     std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);

    unsigned int get_celular();

    std:: string get_email();

    Endereco get_endereco();

    void imprime_cliente();
    
    void set_email(std::string);
    void set_celular(unsigned int cel);
    void set_endereco(Endereco end);
    
    virtual Acesso acesso_site() const override;

};



#endif