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

}; // @class Endereco
class Endereco{
    //declara as informações privadas do endereço.
    private:
    std::string _CEP;
    std::string _cidade;
    Estado _estado;
    unsigned int _numero;
    unsigned int _complemento;
    //declara os métodos relacionados ao endereço.
    public:
    /**
     *@brief constroi uma classe endereco
     *@param cep CEP do endereco
     *@param cidade Cidade do endereco
     *@param estado Estado do endereco
     *@param numero Numero do endereco
     *@param complemento Complemento do endereco
     */
    Endereco(std::string CEP,
    std::string cidade,
    Estado estado,
    unsigned int numero,
    unsigned int complemento);
    //@brief acessa a variável CEP do endereço.
    std::string get_CEP(); 
    //@brief acessa a variável cidade do endereço.
    std::string get_cidade();
    //@brief determina o estado que o endereço se encontra.
    Estado get_estado();
    //@brief acessa a variável numero do endereço.
    unsigned int get_numero();
    //@brief acessa a variável complemento do endereço.
    unsigned int get_complemento();
    /**
    *@brief converte um estado(int) em string
    *@param estado Estado a ser convertido
    *@return string retorna a string correspondente ao estado
    */
    Estado converte_string_estado(std::string estado);
};

#endif 
