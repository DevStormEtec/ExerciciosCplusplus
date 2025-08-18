#include <iostream>
#include <string>
using namespace std;

// Função para substituir vogais por '*'
string substituirVogais(string palavra) {
    for (int i = 0; i < palavra.length(); i++) {
        char letra = tolower(palavra[i]); // Deixa minuscula para facilitar a verificacao

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            palavra[i] = '*';
        }
    }
    return palavra;
}

int main() {
    string palavraOriginal;

    cout << "Digite uma palavra: ";
    cin >> palavraOriginal;

    string palavraModificada = substituirVogais(palavraOriginal);

    cout << "Palavra com vogais substituidas: " << palavraModificada << endl;

    return 0;
}
