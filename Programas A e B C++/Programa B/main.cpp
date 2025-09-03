#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


/* 
Termino do exercicio feito por Otavio Giovanelli Biazzi e Pedro Henrique Miranda
Atividade: Programa B
*/

int getId(std::vector<std::string> &nomes, const std::string &s) {
    for (int i = 0; i < (int)nomes.size(); ++i) {
        if (nomes[i] == s) return i;
    }
    nomes.push_back(s);
    return (int)nomes.size() - 1;
}

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (true) {
        int N, M;
        if (!(std::cin >> N >> M)) return 0;
        if (N == 0 && M == 0) break;

        std::vector<std::string> cursoNome;
        std::vector< std::vector<std::string> > prereqs;
        for (int i = 0; i < N; ++i) {
            std::string nome;
            int K;
            std::cin >> nome >> K;
            cursoNome.push_back(nome);
            prereqs.push_back(std::vector<std::string>());
            for (int j = 0; j < K; ++j) {
                std::string p;
                std::cin >> p;
                prereqs[i].push_back(p);
            }
        }

        std::vector<std::string> nomesUnicos;
        for (int i = 0; i < N; ++i) {
            getId(nomesUnicos, cursoNome[i]);
            for (int j = 0; j < (int)prereqs[i].size(); ++j) {
                getId(nomesUnicos, prereqs[i][j]);
            }
        }

        int total = (int)nomesUnicos.size();

        std::vector< std::vector<int> > adj(total);
        std::vector<int> indeg(total, 0);

        for (int i = 0; i < N; ++i) {
            int idCurso = getId(nomesUnicos, cursoNome[i]);
            for (int j = 0; j < (int)prereqs[i].size(); ++j) {
                int idPre = getId(nomesUnicos, prereqs[i][j]);
                adj[idPre].push_back(idCurso);
                indeg[idCurso] += 1;
            }
        }

        std::vector<bool> taken(total, false);
        int takenCount = 0;
        std::vector< std::vector<std::string> > semestres;

        while (takenCount < total) {
            std::vector<int> dispon;
            for (int i = 0; i < total; ++i) {
                if (!taken[i] && indeg[i] == 0) dispon.push_back(i);
            }

            std::sort(dispon.begin(), dispon.end());

            int pegar = (int)dispon.size();
            if (pegar > M) pegar = M;

            std::vector<std::string> lista;
            for (int k = 0; k < pegar; ++k) {
                int u = dispon[k];
                lista.push_back(nomesUnicos[u]);
                taken[u] = true;
                takenCount++;
            }

            for (int k = 0; k < pegar; ++k) {
                int u = dispon[k];
                for (int t = 0; t < (int)adj[u].size(); ++t) {
                    int v = adj[u][t];
                    indeg[v] -= 1;
                }
            }

            std::sort(lista.begin(), lista.end());
            semestres.push_back(lista);
        }

        int S = (int)semestres.size();
        std::cout << "Formatura em " << S << " semestres\n";
        for (int i = 0; i < S; ++i) {
            std::cout << "Semestre " << (i + 1) << " :";
            if (!semestres[i].empty()) std::cout << " ";
            for (int j = 0; j < (int)semestres[i].size(); ++j) {
                if (j) std::cout << " ";
                std::cout << semestres[i][j];
            }
            std::cout << "\n";
        }
    }

    return 0;
}

