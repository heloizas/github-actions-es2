#include <iostream>
#include <stdexcept>

#include "../include/carro.h"

using namespace std;

Carro::Carro()
{
  distanciaPercorrida = 0;
  tanque = 0;
}

void Carro::Abastecer(int litros)
{
  if (litros > armazenamentoMaximo) 
  {
    throw out_of_range ("Tentando abastecer mais que o limite");
  } else {
    tanque = litros;
  }
}

void Carro::Mover(int distancia)
{
  distanciaPercorrida += distancia;
}

int Carro::GetDistanciaTotalPercorrida()
{
  return distanciaPercorrida;
}

float Carro::CalcularCombustivelUsado()
{
  if (distanciaPercorrida > 0) return distanciaPercorrida / consumoPorLitro;
  return 0;
}

float Carro::GetCombustivelRestante()
{
  return tanque - CalcularCombustivelUsado();
}

Carro::~Carro()
{
}
