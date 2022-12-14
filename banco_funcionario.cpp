#include "banco_funcionario.h"

void Banco_Funcionario::adiciona_funcionario(std:: string nome, std:: string login, unsigned int registro)
{
    Funcionario p(nome,login, registro);
    _banco_funcionarios.insert(p);
}

bool Banco_Funcionario::encontra_funcionario(std:: string login)
{
    for(auto it=_banco_funcionarios.begin(); it!=_banco_funcionarios.end(); it++)
    {
        if((*it).get_login()==login)
        {
            return true;
        }
    }
    return false;
}


