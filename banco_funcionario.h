#ifndef BANCO_FUNCINARIOS
#define BANCO_FUNCIONARIOS 

#include "funcionario.h"
#include <string>
#include <string.h>
#include <set>
#include <iostream>


class Banco_Funcionario
{
    private:

    std::set<Funcionario> _banco_funcionarios;
    
    public:
    void adiciona_funcionario(std:: string nome, std:: string login, unsigned int registro);
    bool encontra_funcionario(std::string login); 


};

#endif