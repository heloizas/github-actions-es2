#include <stdio.h>

#ifndef CARRO_H
#define CARRO_H

class Carro
{
private:
    int armazenamentoMaximo = 50;
    int distanciaPercorrida;
    float consumoPorLitro = 15;
    float tanque;

public:
    Carro();
    ~Carro();
    void Abastecer(int);
    void Mover(int);
    int GetDistanciaTotalPercorrida();
    float CalcularCombustivelUsado();
    float GetCombustivelRestante();
};

#endif