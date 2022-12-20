#ifndef  BANCO_CLIENTE_H
#define BANCO_CLIENTE_H
#include "cliente.h"
#include "excecoes.h"
#include "banco_dados.h"

#include <string>
#include <list>

class Banco_Cliente: public Banco_Dados
{
    private:

    std::list<Cliente> _banco_cliente;

    public:
    //função que simula um banco de clientes registrados no site
    virtual void inicializa() override;
    //adiciona cliente ao registro do site
    void adiciona_cliente(Cliente cliente);
    //caso o cliente esteja registrado no site, ele é retornado
    Cliente retorna_cliente(std::string login);
    //caso o cliente esteja no cadastro, essa função retorna verdadeiro
    virtual bool confere_login(std::string login) override;


};


#endif
