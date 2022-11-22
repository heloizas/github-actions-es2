#define CATCH_CONFIG_MAIN

#include "../include/carro.h"
#include "../external/utest.h"
#include <stdexcept>

UTEST(TesteCombustivelRestante, AbasteceuENaoMoveu)
{
  Carro CarroTeste;
  CarroTeste.Abastecer(5);
  CarroTeste.Mover(0);
  ASSERT_EQ(CarroTeste.GetCombustivelRestante(), 5);
}

UTEST(TesteCombustivelRestante, AbasteceuEMoveu)
{
  Carro CarroTeste;
  CarroTeste.Abastecer(2);
  CarroTeste.Mover(30);
  ASSERT_EQ(CarroTeste.GetCombustivelRestante(), 0);
}

UTEST(TesteCombustivelRestante, CombustivelRestante)
{
  Carro CarroTeste;
  CarroTeste.Abastecer(3);
  CarroTeste.Mover(30);
  ASSERT_EQ(CarroTeste.GetCombustivelRestante(), 1);
}

UTEST(TesteCombustivelRestante, AbastecerMaisQueLimite)
{
  Carro CarroTeste;
  ASSERT_EXCEPTION(CarroTeste.Abastecer(51), std::out_of_range);
}

UTEST_MAIN();