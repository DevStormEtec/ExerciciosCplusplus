#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float masculino (float altura){
	return 72.7 * altura - 58;
}

float feminino (float altura){
	return 62.1 * altura - 44.7;
}

int main(int argc, char** argv) {
	std::string genero = "naodefinido";
	float altura, pesoideal;
	char continuar = 's';
	
	while (continuar == 's'){
		
		while (genero != "masculino" && genero!= "feminino"){
			std::cout << "Qual eh o seu genero (masculino ou feminino): ";
			std::cin >> genero;
			if (genero != "masculino" && genero!= "feminino" ) {
				std::cout << "Voce deve ter escrito errado, verifique a ortografia: " << genero << "\n";
				system("pause");
				system("cls");
			}
		}
		std::cout << "Qual eh a sua altura: ";
		std::cin >> altura;
		
		if (genero == "masculino"){
			pesoideal = masculino(altura);
		}
		else {
			pesoideal = feminino(altura);
		}
	
		std::cout << "O seu peso ideal eh " << pesoideal << "\n";
		
		std::cout << "Deseja continuar (s/n): ";
		std::cin >> continuar;
		
		if (continuar == 's'){
			system("cls");
			genero = "naodefinido";
		}
	}
			
		return 0;
}
