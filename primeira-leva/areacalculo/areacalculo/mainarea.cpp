#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float calcularArea(float raio) {
    return M_PI * raio * raio; 
}

int main() {
    float raio, somaDasAreas = 0.0;

    cout << "=== Soma das �reas de 5 C�rculos ===" << endl;

 for (int i = 1; i <= 5; i++) {
        cout << "Digite o raio do c�rculo " << i << ": ";
        cin >> raio;

        somaDasAreas += calcularArea(raio);
    }

    cout << "\nA soma das �reas dos 5 c�rculos �: " << somaDasAreas << endl;

 return 0;
}

