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

}; //classe responsável por administrar o endereço de cada cliente.
class Endereco{
    //declara as informações privadas do endereço.
    private:
    unsigned int _CEP;
    std::string _cidade;
    Estado _estado;
    unsigned int _numero;
    unsigned int _complemento;
    //declara os métodos relacionados ao endereço.
    public:
    //constrói um endereço.
    Endereco(unsigned int CEP,
    std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);
    // acessa a variável CEP do endereço.
    unsigned int get_CEP(); 
    //acessa a variável cidade do endereço.
    std::string get_cidade();
    //determina o estado que o endereço se encontra.
    Estado get_estado();
    //acessa a variável numero do endereço.
    unsigned int get_numero();
    //acessa a variável complemento do endereço.
    unsigned int get_complemento();
};

#endif 
