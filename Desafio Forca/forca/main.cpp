#include <iostream>
#include <ctime>
#include <cstdlib>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int aleatorio(){
	int n = std::rand()%6;
	return n;
	
}

void impimiforca(int n){
	//est�gio 0
	if(n == 0){
		std::cout <<  " _______\n";
		std::cout << "|/      \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
		std::cout << "|       \n";
	}
	//est�gio 1
	if(n == 1){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	}
	
	//est�gio 2
	if(n == 2){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       |\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//est�gio 3
	if(n == 3){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//est�gio 4
	if(n == 4){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|      /  \n";
	}
	
	//est�gio 5
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
	//faz a modifica��o para ficar diferente
	std::srand(time(0));
	int numale, estagioforca;

	
	//gera o numero alat�rio da palavra
	numale = aleatorio();
	
	//pega uma palavra aleat�ria
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
