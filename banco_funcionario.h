#ifndef BANCO_FUNCIONARIOS
#define BANCO_FUNCIONARIOS 

#include "funcionario.h"
#include "banco_dados.h"
#include <string>
#include <string.h>
#include <list>
#include <iostream>


class Banco_Funcionario: public Banco_Dados
{
    private:

    std::list<Funcionario> _banco_funcionarios;
    
    public:
    void adiciona_funcionario(std:: string nome, std:: string login, unsigned int registro);
    virtual bool confere_login(std::string login) override; 
    virtual void inicializa() override;


};

#endif
