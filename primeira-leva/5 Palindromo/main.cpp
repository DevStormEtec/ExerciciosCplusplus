#include <iostream>
#include <string>

/* Verificador de Palíndromo.
Esse programa em C++ le uma palavra digitada pelo usuário, inverte seus caracteres e compara com a original. Se forem iguais, informa que é palíndromo, caso contrário, não é.
Ele repete o processo enquanto o usuário desejar. */

int main(int argc, char** argv) {
    std::string palavra, invertida, repeticao;
    repeticao = "s";
    
    while (repeticao == "s") {
        invertida = "";
        std::cout << "Digite uma palavra, para descobrir se ela e um palindromo: ";
        std::cin >> palavra;
        
        for (int i = palavra.size() - 1; i >= 0; i--) {
            invertida += palavra[i];
        }
        if (palavra == invertida) {
            std::cout << "Verdadeiro\n";
        } else {
            std::cout << "Falso\n";
        }
        
        std::cout << "Deseja continuar (s/n)? ";
        std::cin >> repeticao;
    }

    return 0;
}

