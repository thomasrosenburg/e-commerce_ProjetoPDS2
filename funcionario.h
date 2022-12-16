#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "usuario.h"

class Funcionario: public Usuario{
    private:
    unsigned int _registro;
    public:
    Funcionario(std:: string _nome, std:: string login, unsigned int _registro);
    unsigned int get_registro();
    virtual Acesso acesso_site()  override;
};

#endif 
