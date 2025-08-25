#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float calcularArea(float raio) {
    return M_PI * raio * raio; 
}

int main() {
    float raio, somaDasAreas = 0.0;

    cout << "=== Soma das Áreas de 5 Círculos ===" << endl;

 for (int i = 1; i <= 5; i++) {
        cout << "Digite o raio do círculo " << i << ": ";
        cin >> raio;

        somaDasAreas += calcularArea(raio);
    }

    cout << "\nA soma das áreas dos 5 círculos é: " << somaDasAreas << endl;

 return 0;
}

