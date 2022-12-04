#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

enum Tipo
{
    blusa, 
    calca, 
    sapato,
    shorts,
    vestido

};

class Produto
{
    private:

    std::string _modelo;
    Tipo _tipo;
    unsigned int _codigo; 
    unsigned int _quantidade;
    std::string _tamanho;
    std:: string _cor;
    

    public:
    double _preco;
    Produto(std::string modelo,Tipo tipo,unsigned int _codigo, double preco, unsigned int quantidade, std::string tamanho, std::string cor);
    std:: string get_modelo();
    Tipo get_tipo();
    unsigned int get_codigo();
    unsigned int get_quantidade();
    std::string get_tamanho();
    std:: string get_cor();
    void alterar_quantidade(unsigned int quant);
    void imprimir_produto();


};

#endif

