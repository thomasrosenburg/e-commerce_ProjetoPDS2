#include "../include/funcionario.h"

Funcionario::Funcionario(
    std::string nome,
    std:: string login,
    unsigned int registro
    ): Usuario(nome,login),
    _registro(registro)
    {

    };
unsigned int Funcionario::get_registro()
{
    return _registro;
}

Acesso Funcionario::acesso_site() {
    return Acesso::AMPLO;
}
