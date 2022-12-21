#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
/** @enum Estado
 * @brief Estado enum, corresponde aos estados brasileiros.
 */
enum Estado
{
    /* SUDESTE */
    MG, ///< Estado::MG
    SP, ///< Estado::SP
    RJ, ///< Estado::RJ
    ES, ///< Estado::ES
    /* SUL*/
    RS, ///< Estado::RS
    PR, ///< Estado::PR
    SC,///< Estado::SC
    /* CENTRO OESTE*/
    MT, ///< Estado::MT
    MS, ///< Estado::MS
    GO,///< Estado::GO
    /* NORDESTE*/
    BA, ///< Estado::BA
    PI, ///< Estado::PI
    MA, ///< Estado::MA
    CE, ///< Estado::CE
    RN, ///< Estado::RN
    PB, ///< Estado::PB
    PE, ///< Estado::PE
    AL, ///< Estado::AL
    SE,///< Estado::SE
    /* NORTE*/
    AC, ///< Estado::AC
    RO, ///< Estado::RO
    AM, ///< Estado::AM
    RR, ///< Estado::RR
    PA, ///< Estado::PA
    AP, ///< Estado::AP
    TO ///< Estado::TO

}; 
/**
 * @class Endereco
 *
 * @brief Esta classe é responsável por criar o objeto endereco
 * e introduzir as funções relativas a essa classe.
 */
class Endereco{
    
    private:
    std::string _CEP; ///< CEP.
    std::string _cidade; ///< Cidade.
    Estado _estado; ///< Estado.
    unsigned int _numero; ///< numero da residencia.
    unsigned int _complemento; ///< complemento.
    public:
    /**
     *@brief constroi uma classe endereco
     *@param CEP CEP do endereco
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
    /**
    *@brief acessa a variável CEP do endereço.
    *@return std::string Retorna o CEP.
    */
    std::string get_CEP(); 
    /**
    *@brief acessa a variável cidade do endereço.
    *@return std::string Retorna a Cidade.
    */
    std::string get_cidade();
    /**
    *@brief determina o estado que o endereço se encontra.
    *@return Estado Retorna o Estado.
    */
    Estado get_estado();
     /**
    *@brief  acessa a variável numero do endereço.
    *@return unsigned int Retorna o numero.
    */
    unsigned int get_numero();
    /**
    *@brief  acessa a variável complemento do endereço.
    *@return unsigned int Retorna o complemento.
    */
    unsigned int get_complemento();
    /**
    *@brief converte um estado(int) em string
    *@param estado Estado a ser convertido
    *@return string retorna a string correspondente ao estado
    */
    Estado converte_string_estado(std::string estado);
};

#endif 
