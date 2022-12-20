#ifndef EXCECOES_H
#define EXCECOES_H

#include<iostream>
using namespace std;

class excecoes_login_cliente :public exception

{
    public:
    virtual const char* what() const noexcept override;
    
};
class excecoes_operacoes :public exception
{
    public:
    virtual const char* what() const noexcept override;
};
class excecoes_codigo : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
class excecoes_categoria : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
class excecoes_quantidade : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
class excecoes_conversao_string : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
class excecoes_conversao_estado : public exception
{
    public:
    virtual const char* what() const noexcept override;
};
#endif
