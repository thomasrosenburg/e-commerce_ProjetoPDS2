#include "endereco.h"

Endereco::Endereco(unsigned int CEP,
    std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento)
    {
        _CEP=CEP;
        _cidade=cidade;
        _estado=estado;
        numero=numero;
        _complemento=complemento;
    };

unsigned int Endereco::get_CEP()
{
    return _CEP;
};
std::string Endereco::get_cidade()
{
    return _cidade;
};


Estado Endereco::get_estado()
{
    return _estado;
};

unsigned int Endereco::get_numero()
{
    return _numero;
};

unsigned int Endereco::get_complemento()
{
    return _complemento;
}
