#include<iostream>
#include "excecoes.h"

using namespace std;

const char* excecoes_login_cliente:: what() const noexcept
{
    return "Login invalido!;"
}
const char* excecoes_operacoes:: what() const noexcept
{
    return "operacao invalida;"
}
const char* excecoes_codigo:: what() const noexcept
{
    return "produto não encontrado;"
}
