#include <iostream>
#include <vector>

/* Exercicio finalizado por Thiago Maia Coraini e Laura cristina gonçalves da cruz */

int main(int argc, char** argv) {
	
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    int teste = 1;

    while (std::cin >> N >> M) {
        if (N == 0 && M == 0) break;

        std::vector<int> temp(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> temp[i];
        }

        int soma = 0;
        for (int i = 0; i < M; ++i) soma += temp[i];

        int media = soma / M;
        int minimo = media;
        int maximo = media;

        for (int i = M; i < N; ++i) {
            soma += temp[i];
            soma -= temp[i - M];
            media = soma / M;
            if (media < minimo) minimo = media;
            if (media > maximo) maximo = media;
        }

        std::cout << "Teste " << teste << "\n";
        std::cout << minimo << " " << maximo << "\n\n";

        ++teste;
    }

    return 0;
}

