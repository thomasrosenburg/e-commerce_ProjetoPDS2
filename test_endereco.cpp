#include "../include/endereco.h"
#include "../third_party/doctest.h"

TEST_CASE("Testa Endereço Construtor")
{
    Endereco endereco = Endereco("31710550", "Belo Horizonte", MG, 5425, 524);
    CHECK_EQ("31710550", endereco.get_CEP());
    CHECK_EQ("Belo Horizonte", endereco.get_cidade());
    CHECK_EQ(0, endereco.get_estado());
    CHECK_EQ(5425, endereco.get_numero());
    CHECK_EQ(524, endereco.get_complemento());
}
