#include "pedido.h"
#include "cliente.h"
#include "endereco.h"
#include "estoque.h"
#include "produto.h"
#include "usuario.h"
#include "banco_funcionario.h"
#include "banco_cliente.h"

#include <iostream>
#include <string.h>
#include <set>

int main()
{
    /*variavel auxiliar que recebe a informação se o cliente já tem cadastro*/
    Cliente usuario_site;
    std:: string aux_cadastro;
    int auxiliar_funcao=0;
    
    Estoque estoque;
    estoque.inicializa_estoque();
    
    Banco_Funcionario banco_funcionario;
    banco_funcionario.inicializa_funcionarios();

    Banco_Cliente banco_cliente;
    banco_cliente.Inicializa_Clientes();
    

    std::cout<<"BEM VINDO AO NOSSO SITE\n";
    std::cout<<"Já possui login no nosso site?\n";
    std:: cin>>aux_cadastro;

    /*caso o usuario ja tenha cadastro, ele não precisará criar um*/
    if(aux_cadastro=="SIM")
    {
        std::string aux_login;
        std::cout<<"Login:\n";
        std::cin>>aux_login;
        /* caso o login seja igual a de um funcionário do banco de dados ele possuirá acesso 
        a determinadas funções especificas*/
        if(banco_funcionario.encontra_funcionario(aux_login)==true)
        {
            std::string modelo;
            unsigned int tipo;
            unsigned int codigo; 
            unsigned int quantidade;
            std::string tamanho;
            std:: string cor;
            unsigned int preco;
            int count=1;
    while(count ==1)
    {
            std::cout<<"Qual operação deseja realizar?\n";
            std::string command;
            std::cin>>command;
            {
                if (command == "insert")
                {
                    std::cout<<"Digite as informações do produto que deseja adicionar\n";
                    std:: cout<<"Nome do modelo:\n";
                    std::cin>>modelo;
                    std:: cout<<"Tipo:\n";
                    std::cin>>tipo;
                    std:: cout<<"Nome do codigo:\n";
                    std:: cin>> codigo;
                    std:: cout<<"Quantidade do produto:\n";
                    std::cin>>quantidade;
                    std::cout<<"Tamanho do produto:\n";
                    std::cin>>tamanho;
                    std::cout<<"Cor do produto:\n";
                    std::cin>>cor;
                    std::cout<<"Preco do produto: \n";
                    std::cin>>preco;

                    


                    /*construindo um produto com as características lidos do teclado*/
                    Produto aux(modelo,(Tipo) tipo,codigo, preco, quantidade,tamanho, cor);
                    estoque.adiciona_produto(aux);
                }
                if(command == "delete")
                {
                    std::cout<<"Digite as informações do produto que deseja retirar\n";
                    std:: cout<<"Nome do modelo:\n";
                    std::cin>>modelo;
                    std:: cout<<"Tipo:\n";
                    std::cin>>tipo;
                    std:: cout<<"Nome do codigo:\n";
                    std:: cin>> codigo;
                    std:: cout<<"Quantidade do produto:\n";
                    std::cin>>quantidade;
                    std::cout<<"Tamanho do produto:\n";
                    std::cin>>tamanho;
                    std::cout<<"Cor do produto:\n";
                    std::cin>>cor;
                    std::cout<<"Preco do produto: \n";
                    std::cin>>preco;
                    

                    Produto aux(modelo,(Tipo) tipo,codigo, preco, quantidade,tamanho, cor);
                    estoque.retira_produto(aux);

                }
                std::cout<<"Deseja executar mais alguma ação? Se sim, tecle 1, caso contrário tecle 0"<<std::endl;
        }       std::cin>>count;
    }
        }

    /* caso nao estiver no banco de dados significa que é cliente*/
    else
    {
        usuario_site=banco_cliente.retorna_cliente(aux_login);
        auxiliar_funcao=1;
    }
}
if(aux_cadastro=="NÃO")
{
    std:: string resposta_cadastro;
    std::cout<<"Deseja se cadastrar no nosso site?\n";
    std::cin>>resposta_cadastro;
    if(resposta_cadastro=="SIM")
    {
        std::string nome;
        std:: string login;
        std::string email;
        std:: string  CEP;
        std::string cidade;
        unsigned int estado;
        unsigned int numero;
        unsigned int complemento; 
        std::string celular;

        std::cout<<"Digite abaixo suas informações:\n";

        std::cout<<"Nome:\n";
        std::cin>>nome;

        std::cout<<"Login:\n";
        std::cin>>login;

        std::cout<<"Email:\n";
        std::cin>>email;

        std::cout<<"CEP:\n";
        std::cin>>CEP;

        std::cout<<"Cidade:\n";
        std::cin>>cidade;

        std::cout<<"Estado:\n";
        std::cin>>estado;

        std::cout<<"Numero:\n";
        std::cin>>numero;

        std::cout<<"Complemento:\n";
        std::cin>>complemento;

        std::cout<<"Celular:\n";
        std::cout<<celular;
        
    banco_cliente.adiciona_cliente(Cliente(nome,login,email,celular,CEP,cidade,(Estado)estado,numero,complemento));
    usuario_site=Cliente(nome,login,email,celular,CEP,cidade,(Estado)estado,numero,complemento);

    std::cout<<"Cadastro realizado com sucesso!";
    auxiliar_funcao=1;
    }

    if(resposta_cadastro=="NÃO")
    {
        std::cout<<"Muito obrigada por visitar nosso site!\n";
        return 0;
    }

    if(auxiliar_funcao==1)
    {
        Pedido pedido_cliente;
        pedido_cliente.adicionar_cliente(usuario_site);
        int operacao_cliente;
        
    
        std::cout<<"Qual operação que gostaria de realizar?\n";
        std::cout<<"1: Visualizar todos os produtos;\n";
        std::cout<<"2: Visualizar todos os produtos ordenados do menor para o maior preço;\n";
        std::cout<<"3: Visualizar produtos por categoria;\n";
        std::cout<<"4: Adicionar ao carrinho;\n";
        std::cout<<"5: Finalizar compra;\n";
        std::cout<<"6: Sair do site;\n";

        
 while(std::cin>>operacao_cliente)
 {
     if(operacao_cliente<1 || operacao_cliente>6)
            {throw excecoes_operacoes();}
     
        if(operacao_cliente==1)
        {
            estoque.imprimir_todos();
        }
        if(operacao_cliente==2)
        {
            estoque.ordena_preco();
            estoque.imprimir_todos();
        }
        if(operacao_cliente==3)
        {
            int auxiliar_categoria;
            std::cout<<"Qual categoria você gostaria de visualizar?\n";
            std::cout<<"1: Blusa;\n";
            std::cout<<"2: Calça;\n";
            std::cout<<"3: Sapato;\n";
            std::cout<<"4: Vestido;\n";
            std::cout<<"5: Shorts;\n";

            std::cin>>auxiliar_categoria;
            //cabe outra exceção aqui
            if(auxiliar_categoria==1)
            {
                estoque.exibir_blusa();
            }

            if(auxiliar_categoria==2)
            {
                estoque.exibir_calca();
            }

            if(auxiliar_categoria==3)
            {
                estoque.exibir_sapatos();
            }
            if(auxiliar_categoria==4)
            {
                estoque.exibir_vestidos();
            }

            if(auxiliar_categoria==5)
            {
                estoque.exibir_shorts();
                
            }

        }
        if(operacao_cliente==4)
        {
            unsigned int codigo_lido;
            unsigned int quantidade;
            std::cout<<"Digite o codigo do produto que gostaria de adicionar ao carrinho.\n";
            std::cin>>codigo_lido;
            std::cout<<"Quantos gostaria de adicionar ao carrinho?";
            std::cin>>quantidade;
            
           
            Produto p=estoque.find_codigo(codigo_lido);
            pedido_cliente.adicionar_carrinho(p,quantidade)
            
            


        }
        if(operacao_cliente==5)
        {       
                int forma_pagamento;

                std::cout<<"O valor total da sua compra foi de: R$ "<<pedido_cliente.calcular_total()<<",00\n";
                pedido_cliente.calcular_frete();
                std::cout<<"Como deseja realizar o pagamento?\n";
                std::cout<<"1: Cartão de Crédito;\n";
                std::cout<<"2: Cartão de débito;\n";
                std::cout<<"3: Boleto;\n";
                std::cout<<"4: Pix;\n";
                std::cout<<"5: Transferencia Bancária\n";

                std::cin>>forma_pagamento;

                pedido_cliente.selecionar_pagamento((Pagamento)forma_pagamento);

                std::cout<<"Seu pedido foi realizado com sucesso! Muito obrigado!\n";
                return 0;

        }
        if(operacao_cliente=6)
        return 0;

    
    }

}
}
};
