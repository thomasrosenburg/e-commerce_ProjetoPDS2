#ifndef  BANCO_CLIENTE_H
#define BANCO_CLIENTE_H
#include "cliente.h"

#include <string>
#include <list>

class Banco_Cliente
{
    private:

    std::list<Cliente> _banco_cliente;

    public:
    //função que simula um banco de clientes registrados no site
    void Inicializa_Clientes();
    //adiciona cliente ao registro do site
    void adiciona_cliente(Cliente cliente);
    //caso o cliente esteja registrado no site, ele é retornado
    Cliente retorna_cliente(std::string login);
    bool confere_login(std::string login);


};


#endif
