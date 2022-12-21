#include "../include/funcionario.h"
#include "../third_party/doctest.h"

TEST_CASE("Testa construtor funcionario")
{
    Funcionario funcionario = Funcionario("Thomas", "THOMPZERA", 13);
    CHECK_EQ(13, funcionario.get_registro());
    CHECK_EQ("Thomas", funcionario.get_nome());
    CHECK_EQ("THOMPZERA", funcionario.get_login());
}
