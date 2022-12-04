#ifndef VENDA_H
#define VENDA_H

#include <list>
#include <string>
#include "pedido.h"
/* Classe responsável por armazenar os pedidos*/

class Venda{
    private:
    std::list<Pedido>pedidos_loja;

    public:
    void realiza_pedido(Pedido p);
    void imprime_relatorio();
    
    
};


#endif