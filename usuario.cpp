#include "usuario.h"
#include <string>

Usuario::Usuario(std::string nome, 
                std:: string login
                ):_nome(nome),
                _login(login)
                {

                };
std::string Usuario::get_nome() const
{
    return _nome;
};
std::string Usuario:: get_login()const
{
    return _login;
}
Acesso Usuario:: acesso_site() const
{
    return Acesso::SEM_ACESSO;
}
void Usuario::set_nome(std::string nome)
{
    _nome=nome;
}
void Usuario::set_login(std::string login)
{
    _login=login;
}