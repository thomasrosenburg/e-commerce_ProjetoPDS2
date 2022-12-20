#include "../include/pedido.h"
#include "../include/cliente.h"
#include "../include/endereco.h"
#include "../include/estoque.h"
#include "../include/produto.h"
#include "../include/usuario.h"
#include "../include/banco_funcionario.h"
#include "../include/banco_cliente.h"

#include <iostream>
#include <string>
#include <set>

int main()
{
    /*variavel auxiliar que recebe a informação se o cliente já tem cadastro*/
    Cliente usuario_site = Cliente();
    std:: string aux_cadastro;
    int auxiliar_funcao=0;

    Estoque estoque;
    estoque.inicializa_estoque();

    Banco_Funcionario banco_funcionario;
    banco_funcionario.inicializa();

    Banco_Cliente banco_cliente;
    banco_cliente.inicializa();


    std::cout<<"BEM VINDO AO NOSSO SITE\n";
cadastro:
    std::cout<<"Já possui login no nosso site? SIM/NAO\n";
    try
    {
        std:: cin >> aux_cadastro;;
        if(aux_cadastro != "SIM" && aux_cadastro != "NAO" )
        {
            throw excecoes_operacoes();
        }
    }
    catch(excecoes_operacoes &e)
    {
        std::cout << e.what() << "\nDigite SIM ou NAO\n";
        goto cadastro;
    }

    /*caso o usuario ja tenha cadastro, ele não precisará criar um*/
    if(aux_cadastro=="SIM")
    {
        std::string aux_login;
        std::cout<<"Login:\n";
        std::cin>>aux_login;
        /* caso o login seja igual a de um funcionário do banco de dados ele possuirá acesso
        a determinadas funções especificas*/
        if(banco_funcionario.confere_login(aux_login)==true)
        {
            std::string modelo;
            unsigned int tipo;
            unsigned int codigo;
            unsigned int quantidade;
            std::string tamanho;
            std::string cor;
            double preco;
            int count=1;
            while(count)
            {
                std::string command;
                std::cout<<"Qual operação deseja realizar?\n";
command:
                std::cout<<"Inserir: Adicionar ao estoque\nDeletar: Retirar produto do estoque\nImprimir: Imprimir estoque\nAlterar: Alterar quantidade de um produto\n";
                try
                {
                    std::cin >> command;
                    if(command != "Inserir" && command != "Deletar" && command != "Imprimir" && command != "Alterar")
                    {
                        throw excecoes_operacoes();
                    }
                }
                catch(excecoes_operacoes &e)
                {
                    std::cout << e.what() << "\nDigite uma operação válida\n";
                    goto command;
                }
                if (command == "Inserir")
                {
                    std::cout<<"Digite as informações do produto que deseja adicionar\n";
                    std::cout<<"Nome do modelo:\n";
                    getchar();
                    std::getline (std::cin,modelo);
tipo:
                    std::cout<<"Tipo:\n Digite:\n 1 para Blusa\n 2 para Calça\n 3 para Sapato\n 4 para Shorts\n 5 para Vestido\n";
                    try
                    {
                        std::cin>>tipo;
                        if(tipo < 1 || tipo > 5)
                        {
                            throw excecoes_conversao_string();
                        }
                    }
                    catch(excecoes_conversao_string &e)
                    {
                        std::cout << e.what() << "\nDigite um tipo válido\n";
                        goto tipo;
                    }
codigo:
                    std::cout<<"Número do codigo:\n";
                    try
                    {
                        std::cin>>codigo;
                        if((estoque.confere_codigo(codigo)))
                        {
                            throw excecoes_codigo();
                        }
                    }
                    catch(excecoes_codigo &e)
                    {
                        std::cout << e.what() << "Esse código já esta sendo usado";
                        goto codigo;
                    }
                    std::cout<<"Quantidade do produto:\n";
                    std::cin>>quantidade;
                    std::cout<<"Tamanho do produto:\n";
                    std::cin>>tamanho;
                    std::cout<<"Cor do produto:\n";
                    getchar();
                    std::getline (std::cin,cor);
                    std::cout<<"Preco do produto: \n";
                    std::cin>>preco;

                    /*construindo um produto com as características lidos do teclado*/
                    Produto aux(modelo,(Tipo) tipo,codigo, preco, quantidade,tamanho, cor);
                    estoque.adiciona_produto(aux);
                }
                if(command == "Deletar")
                {
                    std::cout<<"Digite o código do produto que deseja retirar\n";
                    std:: cin >> codigo;
                    Produto aux =estoque.find_codigo(codigo);
                    estoque.retira_produto(aux);

                }
                if (command == "Imprimir")
                {
                    estoque.imprimir_todos();
                }
                if(command == "Alterar")
                {
                    std::cout<<"Digite o código do produto que deseja alterar a quantidade\n";
alterar_codigo:
                    std:: cin >> codigo;
                    if(!(estoque.confere_codigo(codigo)))
                    {
                        std::cout << "Digite um codigo válido\n";
                        goto alterar_codigo;
                    }
                    if((estoque.confere_codigo(codigo)))
                    {
                        std::cout << "Digite a quantidade que deseja inserir no estoque\n";
                        int quant;
                        std:: cin >> quant;
                        estoque.alterar_quantidade_produto(quant, codigo);
                    }
                }
acao:
                std::cout<<"Deseja executar mais alguma ação? Se sim, tecle 1, caso contrário tecle 0"<<std::endl;
                try
                {
                    std::cin >> count;
                    if(count != 1 && count != 0)
                    {
                        throw excecoes_operacoes();
                    }
                }
                catch(excecoes_operacoes &e)
                {
                    std::cout << e.what() << "\nDigite uma ação válida\n";
                    goto acao;
                }
            }
        }

        /* caso nao estiver no banco de dados significa que é cliente*/
        if((banco_funcionario.confere_login(aux_login)==false))
        {
            usuario_site=banco_cliente.retorna_cliente(aux_login);
            auxiliar_funcao=1;
        }
    }
    /*caso o usuário não tenha cadastro, ele será redirecionado e poderá fazer um cadastrou ou sair do programa */
    if(aux_cadastro=="NAO")
    {
        std:: string resposta_cadastro;
resposta_cadastro:
        std::cout<<"Deseja se cadastrar no nosso site? SIM/NAO\n";
        try
        {
            std::cin >> resposta_cadastro;
            if(resposta_cadastro != "SIM" && resposta_cadastro != "NAO" )
            {
                throw excecoes_operacoes();
            }
        }
        catch(excecoes_operacoes &e)
        {
            std::cout << e.what() << "\nDigite SIM ou NAO\n";
            goto resposta_cadastro;
        }
        if(resposta_cadastro=="SIM")
        {
            std::string nome;
            std:: string login;
            std::string email;
            std:: string  CEP;
            std::string cidade;
            std::string estado;
            unsigned int numero;
            unsigned int complemento;
            std::string celular;

            std::cout<<"Digite abaixo suas informações:\n";

            std::cout<<"Nome:\n";
            getchar();
            std::getline (std::cin,nome);

            std::cout<<"Login:\n";
            std::cin>>login;

            std::cout<<"Email:\n";
            std::cin>>email;

            std::cout<<"CEP:\n";
            std::cin>>CEP;

            std::cout<<"Cidade:\n";
            getchar();
            std::getline (std::cin,cidade);

            std::cout<<"Estado (Sigla):\n";
            std::cin>>estado;

            std::cout<<"Numero:\n";
            std::cin>>numero;

            std::cout<<"Complemento (apenas o número):\n";
            std::cin>>complemento;

            std::cout<<"Celular:\n";
            std::cin>>celular;

            Estado estado_lido = usuario_site.get_endereco().converte_string_estado(estado);
            usuario_site=Cliente(nome,login,email,celular,CEP,cidade,estado_lido,numero,complemento);
            banco_cliente.adiciona_cliente(usuario_site);

            std::cout<<"Cadastro realizado com sucesso!\n";
            auxiliar_funcao=1;
        }

        if(resposta_cadastro=="NAO")
        {
            std::cout<<"Muito obrigada por visitar nosso site!\n";
            return 0;
        }
    }
    /*caso o usuário seja um cliente, ele terá acesso a funções específicas */
    if(auxiliar_funcao==1)
    {
        Pedido pedido_cliente;
        pedido_cliente.adicionar_cliente(usuario_site);
        int operacao_cliente;

        int count = 1;

        while(count)
        {
operacao_cliente:
            std::cout<<"Qual operação que gostaria de realizar?\n";
            std::cout<<"1: Visualizar todos os produtos;\n";
            std::cout<<"2: Visualizar todos os produtos ordenados do menor para o maior preço;\n";
            std::cout<<"3: Visualizar produtos por categoria;\n";
            std::cout<<"4: Adicionar ao carrinho;\n";
            std::cout<<"5: Visualizar carrinho;\n";
            std::cout<<"6: Finalizar compra;\n";
            std::cout<<"7: Sair do site;\n";
            try
            {
                std::cin >> operacao_cliente;
                if(operacao_cliente < 1 || operacao_cliente > 7)
                    throw excecoes_operacoes();
            }
            catch(excecoes_operacoes &e)
            {
                std::cout << e.what() << "\nDigite uma operação válida!\n";
                goto operacao_cliente;
            }
            if(operacao_cliente<1 || operacao_cliente>7)
            {
                throw excecoes_operacoes();
            }
            if(operacao_cliente==1)
            {
                estoque.imprimir_todos();
            }
            if(operacao_cliente==2)
            {
                estoque.ordena_preco();
            }
            if(operacao_cliente==3)
            {
                int auxiliar_categoria;
auxiliar_categoria:
                std::cout<<"Qual categoria você gostaria de visualizar?\n";
                std::cout<<"1: Blusa;\n";
                std::cout<<"2: Calça;\n";
                std::cout<<"3: Sapato;\n";
                std::cout<<"4: Vestido;\n";
                std::cout<<"5: Shorts;\n";
                try
                {
                    std::cin>>auxiliar_categoria;
                    if(auxiliar_categoria<1 || auxiliar_categoria>5)
                        throw excecoes_categoria();
                }
                catch(excecoes_categoria &e)
                {
                    std::cout << e.what() << "\nDigite uma categoria válida!\n";
                    goto auxiliar_categoria;
                }
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
                int quantidade;
codigo_lido:
                std::cout<<"Digite o codigo do produto que gostaria de adicionar ao carrinho.\n";
                try
                {
                    std::cin>>codigo_lido;
                    estoque.find_codigo(codigo_lido);
                }
                catch(excecoes_codigo &e)
                {
                    std::cout << e.what() << "\nProduto não encontrado!\n";
                    goto codigo_lido;
                }
                Produto p=estoque.find_codigo(codigo_lido);
quantidade:
                std::cout<<"Quantos gostaria de adicionar ao carrinho? Desse produtos temos " << p._quantidade << " disponíveis\n";
                try
                {
                    std::cin>>quantidade;
                    pedido_cliente.adicionar_produto(p,quantidade);
                    estoque.retira_quantidade_produto(quantidade, codigo_lido);
                }
                catch(excecoes_quantidade &e)
                {
                    std::cout << e.what() << "\nDigite uma quantidade válida\n";
                    goto quantidade;
                }
            }
            if(operacao_cliente==5)
            {
                pedido_cliente.imprimir_carrinho();
            }
            if(operacao_cliente==6)
            {
                int forma_pagamento;

                std::cout<<"O valor total dos produtos foi de: R$ "<<pedido_cliente.calcular_total()<<",00\n";
                if(pedido_cliente.calcular_total() == 0.00)
                {
                    return 0;
                }
                std::cout<<pedido_cliente.calcular_frete();
pagamento:
                std::cout<<"Como deseja realizar o pagamento?\n";
                std::cout<<"1: Cartão de Crédito;\n";
                std::cout<<"2: Cartão de débito;\n";
                std::cout<<"3: Boleto;\n";
                std::cout<<"4: Pix;\n";
                std::cout<<"5: Transferencia Bancária\n";
                try
                {
                    std::cin >> forma_pagamento;
                    if(forma_pagamento < 1 || forma_pagamento > 5)
                    {
                        throw excecoes_operacoes();
                    }
                }
                catch(excecoes_operacoes &e)
                {
                    std::cout << e.what() << "\nDigite uma operação válida!\n";
                    goto pagamento;
                }


                pedido_cliente.selecionar_pagamento((Pagamento)forma_pagamento);

                std::cout<<"Seu pedido foi realizado com sucesso! Muito obrigado!\n";
                return 0;

            }
            if(operacao_cliente==7)
            {
                return 0;
            }
            std::cout<<"Deseja executar mais alguma ação? Se sim, tecle 1, caso contrário tecle 0"<<std::endl;
            std::cin>>count;
        }
        return 0;
    }
};
