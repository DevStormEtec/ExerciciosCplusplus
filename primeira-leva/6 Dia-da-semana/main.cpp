#include <iostream>

/* Conversor de Número para Dia da Semana.
Esse programa em C++ le um número digitado pelo usuário, calcula o resto da divisão por 7 e,
a partir disso, ele exibe o dia da semana correspondente. */

int main(int argc, char** argv) {
	int numero, dia;
	std::cout << "Digite um numero para ser convertido em um dia da semana:\n";
	std::cin >> numero;
	dia = numero % 7;
	if(dia == 0){
		std::cout << "Domingo";
	}
	else if(dia == 1){
		std::cout << "Segunda-Feira";
	}
	else if(dia == 2){
		std::cout << "Terca-Feira";
	}
	else if(dia == 3){
		std::cout << "Quarta-Feira";
	}
	else if(dia == 4){
		std::cout << "Quinta-Feira";
	}
	else if(dia == 5){
		std::cout << "Sexta-Feira";
	}
	else if(dia == 6){
		std::cout << "Sabado";
	}
	return 0;
}

