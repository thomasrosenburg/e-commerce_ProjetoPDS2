#ifndef USUARIO_H
#define USUARIO_H

#include <string>

enum Acesso{AMPLO, RESTRITO, SEM_ACESSO};

class Usuario{
    
    private:
    
     std:: string _nome;
     std:: string _login;
    
    public:

    Usuario(
        std::string _nome,
        std:: string _login
        );

    std:: string get_nome() const;
    std:: string get_login() const;
    virtual Acesso acesso_site() const;
     void set_nome(std:: string nome);
     void set_login(std:: string login);
};


#endif