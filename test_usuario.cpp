#include "usuario.h"
#include "doctest.h"

TEST_CASE("Testa Usuario Construtor") {
  Usuario usuario = Usuario("Taylor", "ts1989");
  CHECK_EQ("Taylor", usuario.get_nome());
  CHECK_EQ("ts1989", usuario.get_login());
  CHECK_EQ(2, usuario.acesso_site());
}

TEST_CASE("Testa Set Usuario"){
    Usuario usuario = Usuario("Harry", "hs1964");
    usuario.set_nome("Styles");
    usuario.set_login("hs1312");
    CHECK_EQ("Styles", usuario.get_nome());
    CHECK_EQ("hs1312", usuario.get_login());
}
