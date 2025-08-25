#include <iostream>

/* Calculadora de Potencia.
Esse Programa de C++ le uma base e um expoente informados pelo usuário. Após isso ele calcula a potência por multiplicações repetidas p/ exibir o resultado  */

int main(int argc, char** argv) {
	int base, expoente, resultado = 1;
	
	std::cout << "Digite uma base:\n";
	std::cin >> base;
	std::cout << "Digite um expoente para a base:\n";
	std::cin >> expoente;
	while(expoente > 0){
		resultado = resultado * base;
		expoente--;
	}
	std::cout << "O resultado e: " << resultado;
	return 0;
}
