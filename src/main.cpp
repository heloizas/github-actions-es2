
#include <iostream>

#include "../include/carro.h"

using namespace std;

// Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:

// Abastecer o carro com uma certa quantidade de gasolina;
// Mover o carro em uma determinada distância (medida em km);
// Retornar a quantidade de combustível e a distância total percorrida.

// No programa principal, crie 2 carros.
// Abasteça 20 litros no primeiro e 30 litros no segundo.
// Desloque o primeiro em 200 km e o segundo em 400 km.
// Exiba na tela a distância percorrida e o total de combustível restante para cada um.

int main(int ac, char **av)
{
	Carro Carro1;
	Carro Carro2;

	Carro1.Abastecer(20);
	Carro2.Abastecer(30);

	Carro1.Mover(200);
	Carro2.Mover(400);

	cout << "Distância percorrida pelo Carro 1: " << Carro1.GetDistanciaTotalPercorrida() << endl;
	cout << "Total de combustível restante do Carro 1: " << Carro1.GetCombustivelRestante() << endl << endl;

	// Andou 200km no total
	// Gastou: 13,33
	// Sobrou: 6,67
	
	cout << "Distância percorrida pelo Carro 2: " << Carro2.GetDistanciaTotalPercorrida() << endl;
	cout << "Total de combustível restante do Carro 2: " << Carro2.GetCombustivelRestante() << endl;

	// Andou 400km no total
	// Gastou: 26,66
	// Sobrou: 3,34
}
