#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

int multiplica(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        cout << "Erro: Divisao por zero nao eh permitida." << endl;
        return 0; // Valor arbitrário em caso de erro
    }
    return (float)a / b;
}

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    cout << "Soma: " << soma(num1, num2) << endl;
    cout << "Subtracao: " << subtrai(num1, num2) << endl;
    cout << "Multiplicacao: " << multiplica(num1, num2) << endl;
    cout << "Divisao: " << divide(num1, num2) << endl;

    return 0;
}
