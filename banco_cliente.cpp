#include "../include/banco_cliente.h"

void Banco_Cliente::adiciona_cliente(Cliente cliente)
{
    _banco_cliente.push_front(cliente);
}
bool Banco_Cliente::confere_login(std::string login)
{
     for(auto it=_banco_cliente.begin(); it!=_banco_cliente.end(); it++)
    {
        if((*it).get_login()==login)
         return true;
    }
         return false;
}

Cliente Banco_Cliente::retorna_cliente(std:: string login)
{
    if(confere_login(login)==true)
    {
    for(auto it=_banco_cliente.begin(); it!=_banco_cliente.end(); it++)
    {
        if((*it).get_login()==login)
    {
            return (*it);
    }
    
    }
    }
        throw excecoes_login_cliente();
     
    }
void Banco_Cliente:: Inicializa_Clientes()
{
    adiciona_cliente(Cliente("Raquel", "raquellacerda", "raquellacerda@gmail.com", "9961-3850", "30140111", "Belo Horizonte", Estado::MG, 799, 1701));
    adiciona_cliente(Cliente("Marcos", "marcoscunha", "marcoscunha@gmail.com", "8776-7899", "56771223", "Recife", Estado::PE, 146, 801));
    adiciona_cliente(Cliente("Breno", "brenogomes", "brenogomes@gmail.com", "8992-1415", "12286789", "Porto Alegre", Estado::RS, 807, 1102));
    adiciona_cliente(Cliente("Leonardo", "leonardopitella", "leonardopitella@gmail.com", "9923-5789", "78990076", "Goiânia", Estado::GO, 1233, 102));
}
