#ifndef BANCO_DADOS_H
#define BANCO_DADOS_H

#include <string>


class Banco_Dados{
    public:
    virtual void inicializa()=0;
    virtual bool confere_login(std::string login)=0;
};
#endif