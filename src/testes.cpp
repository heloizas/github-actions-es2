#define CATCH_CONFIG_MAIN

#include "../include/carro.h"
#include "../external/catch.hpp"

TEST_CASE("Abasteceu e não moveu")
{
  Carro CarroTeste;
  CarroTeste.Abastecer(5);
  CarroTeste.Mover(0);
  REQUIRE(CarroTeste.GetCombustivelRestante() == 5);
}

TEST_CASE("Abasteceu e moveu")
{
  Carro CarroTeste;
  CarroTeste.Abastecer(2);
  CarroTeste.Mover(30);
  REQUIRE(CarroTeste.GetCombustivelRestante() == 0);
}

TEST_CASE("Combustivel Restante")
{
  Carro CarroTeste;
  CarroTeste.Abastecer(3);
  CarroTeste.Mover(30);
  REQUIRE(CarroTeste.GetCombustivelRestante() == 1);
}

TEST_CASE("Tentou abastecer mais que o limite")
{
  Carro CarroTeste;
  REQUIRE_THROWS_WITH(CarroTeste.Abastecer(51), "Tentando abastecer mais que o limite");
}