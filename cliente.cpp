#include "cliente.h"
#include "endereco.h"
#include <iostream>

Cliente::Cliente(
    std::string nome,
    std:: string login,
    std:: string email,
    std::string celular, 
    std::string CEP,
    std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento
    ): Usuario(nome,login),
    _email(email),
    _celular(celular),
    _endereco(Endereco(CEP, cidade, estado,numero, complemento))
    {

    };

std::string Cliente::get_celular()
{
    return _celular;
};

std:: string Cliente::get_email()
{
    return _email;
};

Endereco Cliente::get_endereco()
{
    return _endereco;
}
Acesso Cliente::acesso_site()  {
    return Acesso::RESTRITO;
};

void Cliente::imprime_cliente()
{
    std:: cout<< "INFORMAÇÕES DO CLIENTE"
    <<std::endl
    <<"Nome: "
    <<get_nome()
    <<std::endl
    <<"Login: "
    <<get_login()
    <<std::endl
    <<"Email: "
    <<get_email()
    <<std::endl;

    //imprimir endereco
    std:: cout<< "ENDEREÇO"<<std::endl
        <<"ESTADO :"<<_endereco.get_estado()<< std::endl
        <<"CIDADE :"<< _endereco.get_cidade()<< std::endl
        <<"CEP :"<<_endereco.get_CEP()<<std::endl
        <<"NÚMERO :"<<_endereco.get_numero()<<std::endl
        <<"COMPLEMENTO :"<<_endereco.get_complemento()<<std::endl;

    
}

void Cliente:: set_celular(std::string cel)
{
    _celular=cel;
}
void Cliente:: set_email(std:: string email)
{
    _email=email;
}
void Cliente::set_endereco(Endereco end)
{
    _endereco=end;
}
