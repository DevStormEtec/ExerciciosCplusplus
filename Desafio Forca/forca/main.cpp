#include <iostream>
#include <ctime>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Desenvolvido por Otávio Giovanelli Biazzi, Pedro Henrique Miranda, Laura Cristina Gonçalves da Cruz e  */

int aleatorio(){
	int n = std::rand()%16;
	return n;

}

void imprimeForca(int n){
	system("cls"); //limpa a tela
	std::cout << "=== JOGO DA FORCA ===\n";
	//estagio 0
	if(n == 0){
	std::cout <<  " _______\n";
	std::cout << "|/      \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	}
	//estagio 1
	if(n == 1){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	std::cout << "|       \n";
	}
	
	//estagio 2
	if(n == 2){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|       |\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//estagio 3
	if(n == 3){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|       \n";
	}
	
	//estagio 4
	if(n == 4){
	std::cout <<  " _______\n";
	std::cout << "|/      |\n";
	std::cout << "|      ( )\n";
	std::cout << "|      /|\\\n";
	std::cout << "|       |\n";
	std::cout << "|      /  \n";
	}
	
	//estagio 5
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
	//faz a modificaçao para ficar diferente
	std::srand(time(0));
	int numale, estagioforca;

	//gera o numero aleatorio da palavra
	numale = aleatorio();
	
	//pega uma palavra aleatoria
	char palavras[16][30] = {
     	"MARTELO",
		"TABUA",
		"PLANETA",
		"ARVORE",
		"TERRA",
		"PONTE",
        "ABERTURA",
		"HIPOPOTAMO",
		"PAREDE",
		"HIDROMASSAGEM",
		"OLHO",
        "MOSCA",
		"ILHA",
		"LAMPADA",
		"ARTES",
		"LOMBADA"
	};
	char* palavraEscolhida = palavras[numale];
	
	// Descobre tamanho da palavra
    int tamanho = 0;
    while (palavraEscolhida[tamanho] != '\0') tamanho++;
    
	// Sistema para salvar o progresso
    char progresso[30];
    for (int i = 0; i < tamanho; i++) {
        progresso[i] = '_';
    }
	
	int erros = 0;
    const int maxErros = 5;
	
    // Sistema para guardar letras chutadas
    char letrasChutadas[26]; // maximo de letras
    int qtdLetras = 0;

    // Loop
    while (erros <= maxErros) {
        imprimeForca(erros);

        std::cout << "\nPalavra: ";
        for (int i = 0; i < tamanho; i++) {
            std::cout << progresso[i] << " ";
        }
        std::cout << "\n";

        // Mostra letras já chutadas
        if(qtdLetras > 0){
            std::cout << "Letras chutadas: ";
            for(int i=0; i<qtdLetras; i++){
                std::cout << letrasChutadas[i] << " ";
            }
            std::cout << "\n";
        }

	// Pergunta letra
    char chute;
    std::cout << "Digite uma letra com CAPSLOCK: ";
    std::cin >> chute;

	// Salva a letra chutada
        letrasChutadas[qtdLetras] = chute;
        qtdLetras++;
		
	// Verifica vitória
        bool venceu = true;
        for (int i = 0; i < tamanho; i++) {
            if (progresso[i] == '_') {
                venceu = false;
                break;
            }
        }
        if (venceu) {
            std::cout << "\nParabens! Voce acertou a palavra: " << palavraEscolhida << "\n";
            break;
        }
	
	// Verifica se a letra existe
        bool achou = false;
        for (int i = 0; i < tamanho; i++) {
            if (palavraEscolhida[i] == chute) { 
                progresso[i] = palavraEscolhida[i];
                achou = true;
            }
        }

        if (!achou) {
            erros++;  // aumenta erros
        }

        if (erros > maxErros) {
            imprimeForca(maxErros);
            std::cout << "\nVoce perdeu! A palavra era: " << palavraEscolhida << "\n";
            break;
        }
    }

    return 0;
}
