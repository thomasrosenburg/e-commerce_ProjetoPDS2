#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
//tipos de produtos presentes no site.
enum Tipo
{
    blusa=1, 
    calca, 
    sapato,
    shorts,
    vestido

};

class Produto
{
    //declara as características de um produto.
    private:

    std::string _modelo;
    Tipo _tipo;
    unsigned int _codigo; 
    unsigned int _quantidade;
    std::string _tamanho;
    std:: string _cor;
    
    //declara os métodos que podem ser feitos com o TAD.
    public:
    //declara a variável preço do produto.
    double _preco;
    //constrói um produto
    Produto(std::string modelo,Tipo tipo,unsigned int _codigo, double preco, unsigned int quantidade, std::string tamanho, std::string cor);
    //acessa a variável modelo do produto.
    std:: string get_modelo();
    //acessa a variável tipo do produto.
    Tipo get_tipo();
    //acessa a variável codigo do produto.
    unsigned int get_codigo();
    //acessa a variável quantidade do produto.
    unsigned int get_quantidade();
    //acessa a variável tamanho do produto.
    std::string get_tamanho();
    //acessa a variável cor do produto.
    std:: string get_cor();
    // altera a quantidade do produto presente no estoque.
    void alterar_quantidade(int quant);
    //imprime na tela as informações do produto na tela.
    void imprimir_produto();
    //converte uma variavel Tipo para uma string.
    std::string conversao_tipo_string(Tipo tipo);
    //converte uma variavel String para um Tipo.
    Tipo conversao_string_tipo(std::string tipo);


};

#endif

