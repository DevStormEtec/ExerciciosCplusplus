#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
