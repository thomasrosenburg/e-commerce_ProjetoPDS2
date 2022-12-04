#ifndef USUARIO_H
#define USUARIO_H

#include <string>
//caracteriza o tipo de usuário, para futuramente filtrar as funções que este pode executar no site.
enum Acesso{AMPLO, RESTRITO, SEM_ACESSO};

class Usuario{
    //declara as informações privadas do usuário.
    private:
    
     std:: string _nome;
     std:: string _login;
    //métodos que o usúario tem.
    public:
    //constrói um usuário. 
    Usuario(
        std::string _nome,
        std:: string _login
        );
    //acessa o nome do usuário.
    std:: string get_nome() const;
    //acessa o login do usuário.
    std:: string get_login() const;
    //determina o tipo de acesso que o usuáiro tem no site.
    virtual Acesso acesso_site() const;
    //registra um nome para o usuário.
     void set_nome(std:: string nome);
    //registra um login para o usuário.
     void set_login(std:: string login);
};


#endif
