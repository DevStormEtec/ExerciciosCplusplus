#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool crescente (int numeros[], int tamanho){
	int menor = 0;
	int maior = 1;
	char verificador;
	for(int i=1; i < tamanho; i++){
		if (numeros[menor] < numeros[maior]){
			verificador = 's';
		}
		else{
			verificador = 'n';
			break;
		}
		maior++;
		menor++;
	}
	if (verificador == 's'){
		return true;
	}
	else{
		return false;
	}
}

bool decrescente (int numeros[], int tamanho){
	int menor = 0;
	int maior = 1;
	char verificador;
	for(int i=1; i < tamanho; i++){
		if (numeros[menor] > numeros[maior]){
			verificador = 's';
		}
		else{
			verificador = 'n';
			break;
		}
		maior++;
		menor++;
	}
	if (verificador == 's'){
		return true;
	}
	else{
		return false;
	}
}

int main(int argc, char** argv) {
	char continuar = 's';
	int numeros[5];
	bool correto;
	while(continuar == 's'){
		std::cout << "Digite 5 numeros:\n";
		for (int i=0; i < 5; i++){
			std::cin >> numeros[i];
		}
		correto = crescente(numeros, 5);
		if(correto == true){
			std::cout << "Ela esta na ordem crescente";
		}
		else if(correto == false){
			correto = decrescente(numeros, 5);
			if(correto == true){
				std::cout << "Ela esta na ordem decrescente";
			}
			else{
			 	std::cout << "Ela esta fora de ordem";
			}
		}
		std::cout << "\nDeseja continuar? (s/n): ";
		std::cin >> continuar;
		if (continuar == 's'){
			system("cls");
		}
	}
	return 0;
}

