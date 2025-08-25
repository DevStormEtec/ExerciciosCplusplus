#include <iostream>
#include <cctype>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool ehvogal (char letra){
	letra = std::tolower(letra);
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		return true;
	}
	else{
		return false;
	}
}

bool ehconsoante(char letra) {
	letra = std::tolower(letra);
	if (letra >= 'a' && letra <='z'){
		return true;
	}
	else{
		return false;
	}
}

int main(int argc, char** argv) {
	int vogal = 0, consoante = 0; 
	char nome[100];
	bool verificador;
	std::cout << "Qual eh o seu nome: ";
	std::cin.getline(nome, 100);
	for (int i = 0; nome[i] != '\0'; i++){
		verificador = ehvogal(nome[i]);
		if (verificador == true){
			vogal++;
		}
		else{
			verificador = ehconsoante(nome[i]);
			if (verificador == true){
				consoante++;
			}
			else{
				continue;
			}
		}
	}
	std::cout << "Seu nome possui " <<  vogal << " vogais\n";	
	std::cout << "Seu nome possui " <<  consoante << " consoantes\n";
	return 0;
}
