#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
enum Estado
{
    /* SUDESTE */
    MG, SP, RJ, ES,
    /* SUL*/
    RS, PR, SC,
    /* CENTRO OESTE*/
    MT, MS, GO,
    /* NORDESTE*/
    BA, PI, MA, CE, RN, PB, PE, AL, SE,
    /* NORTE*/
    AC, RO, AM, RR, PA, AP, TO

};
class Endereco{
    private:
    unsigned int _CEP;
    std::string _cidade;
    Estado _estado;
    unsigned int _numero;
    unsigned int _complemento;

    public:

    Endereco(unsigned int CEP,
    std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);

    unsigned int get_CEP(); 
    std::string get_cidade();
    Estado get_estado();
    unsigned int get_numero();
    unsigned int get_complemento();
};

#endif 