#include "../include/endereco.h"
#include "../include/excecoes.h"

Endereco::Endereco(std::string CEP,
                   std::string cidade,
                   Estado estado,
                   unsigned int numero,
                   unsigned int complemento)
{
    _CEP=CEP;
    _cidade=cidade;
    _estado=estado;
    _numero=numero;
    _complemento=complemento;
};

std::string Endereco::get_CEP()
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
Estado Endereco::converte_string_estado(std::string estado)
{
    if(estado=="MG")
    {
        return Estado::MG;
    }
    if(estado=="SP")
    {
        return Estado::SP;
    }
    if(estado=="RJ")
    {
        return Estado::RJ;
    }
    if(estado=="ES")
    {

        return Estado::ES;
    }
    if(estado=="RS")
    {

        return Estado::RS;
    }
    if(estado=="PR")
    {

        return Estado::PR;
    }
    if(estado=="SC")
    {

        return Estado::SC;
    }
    if(estado=="MT")
    {

        return Estado::MT;
    }
    if(estado=="MS")
    {

        return Estado::MS;
    }
    if(estado=="GO")
    {

        return Estado::GO;
    }
    if(estado=="BA")
    {

        return Estado::BA;
    }
    if(estado=="PI")
    {

        return Estado::PI;
    }
    if(estado=="MA")
    {

        return Estado::MA;
    }
    if(estado=="CE")
    {

        return Estado::CE;
    }
    if(estado=="RN")
    {

        return Estado::RN;
    }
    if(estado=="PB")
    {

        return Estado::PB;
    }
    if(estado=="PE")
    {

        return Estado::PE;
    }
    if(estado=="AL")
    {

        return Estado::AL;
    }
    if(estado=="SE")
    {

        return Estado::SE;
    }
    if(estado=="AC")
    {

        return Estado::AC;
    }
    if(estado=="RO")
    {

        return Estado::RO;
    }
    if(estado=="AM")
    {

        return Estado::AM;
    }
    if(estado=="RR")
    {

        return Estado::RR;
    }
    if(estado=="PA")
    {

        return Estado::PA;
    }
    if(estado=="AP")
    {

        return Estado::AP;
    }
    if(estado=="TO")
    {

        return Estado::TO;
    }
    else
    {
        throw excecoes_conversao_estado();
    }
}
