#include <iostream>
#include <ctime>
#include <cstdlib>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int aleatorio(){
	int n = std::rand()%6;
	return n;
	
}

void impimiforca(int n){
	//estágio 0
	if(n == 0){
		std::cout <<  " _______\n";
		std::cout << "|/      \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
	}
	//estágio 1
	if(n == 1){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	}
	
	//estágio 2
	if(n == 2){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       |\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//estágio 3
	if(n == 3){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//estágio 4
	if(n == 4){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|      /  \n";
	}
	
	//estágio 5
	if(n == 5){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|      / \\\n";
	}	
}




int main(int argc, char** argv) {
	//faz a modificação para ficar diferente
	std::srand(time(0));
	int numale, estagioforca;

	
	//gera o numero alatório da palavra
	numale = aleatorio();
	
	//pega uma palavra aleatória
	char palavras[10][30] = {
    "Bolsonaro",
    "Tabua",
    "Planeta",
    "Arvore"
	};
	char* palavraAleatoria = palavras[numale];
	//inicio jogo
	std::cout << "BEM VINDO AO JOGO DA FORCA!\n";
	estagioforca = 0;
	impimiforca(estagioforca); //imprime a forca
	return 0;
}
