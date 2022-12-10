#include "cliente.h"
#include "doctest.h"

TEST_CASE("Testa Cliente Construtor"){
    Cliente cliente = Cliente("Taylor", "ts1989", "ts@gmail.com", 31913121989,
                               31710400, "Belo Horizonte", MG, 21, 113);
    CHECK_EQ("Taylor", cliente.get_nome());
    CHECK_EQ("ts1989", cliente.get_login());
    CHECK_EQ(2, cliente.acesso_site());
    CHECK_EQ("ts@gmail.com", cliente.get_email());
    CHECK_EQ(31913121989, cliente.get_celular());
    CHECK_EQ(31710400, cliente.get_endereco().get_CEP());
    CHECK_EQ("Belo Horizonte", cliente.get_endereco().get_cidade());
    CHECK_EQ(0, cliente.get_endereco().get_estado());
    CHECK_EQ(21, cliente.get_endereco().get_numero());
    CHECK_EQ(113, cliente.get_endereco().get_complemento());
}
//Testa o caso de alterações nos dados do cliente
TEST_CASE("Testa Set Cliente"){
    Cliente cliente = Cliente("Taylor", "ts1989", "ts@gmail.com", 31913121989,
                               31710400, "Belo Horizonte", MG, 21, 113);
    cliente.set_email("ts2022@gmail.com");
    cliente.set_celular(11984326441);
    Endereco end = Endereco(02860001, "Sao Paulo", SP, 5425, 524);
    cliente.set_endereco(end);
    CHECK_EQ("Taylor", cliente.get_nome());
    CHECK_EQ("ts1989", cliente.get_login());
    CHECK_EQ(2, cliente.acesso_site());
    CHECK_EQ("ts2022@gmail.com", cliente.get_email());
    CHECK_EQ(11984326441, cliente.get_celular());
    CHECK_EQ(02860001, cliente.get_endereco().get_CEP());
    CHECK_EQ("Sao Paulo", cliente.get_endereco().get_cidade());
    CHECK_EQ(1, cliente.get_endereco().get_estado());
    CHECK_EQ(5425, cliente.get_endereco().get_numero());
    CHECK_EQ(524, cliente.get_endereco().get_complemento());
}
