#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool ehImpar(int numero) {
    return numero % 2 != 0;
}

int main() {
    int numero, soma = 0;

   
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    
    for (int i = 1; i <= numero; i++) {
        if (ehImpar(i)) {
            soma += i;
        }
    }

    
    cout << "A soma dos n�meros �mpares at� " << numero << " �: " << soma << endl;

    return 0;
}

