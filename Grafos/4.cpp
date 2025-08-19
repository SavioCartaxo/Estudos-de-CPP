// Problema: Nível de Amizade
// Você está em uma rede social onde cada pessoa é representada por um número de 0 a n−1. Algumas pessoas são amigas entre si.
// A amizade é bidirecional (se A é amigo de B, então B é amigo de A).
// Seu objetivo é, dado um número k, encontrar quantas pessoas estão exatamente no nível de amizade k a partir de uma pessoa inicial.

// 🔸 Entrada:
// Um número inteiro n: número de pessoas.
// Um número inteiro m: número de relações de amizade.
// Em seguida, m linhas com dois inteiros a e b, significando que a é amigo de b.
// Um inteiro s: a pessoa de origem.
// Um inteiro k: o nível de amizade que você deseja encontrar.

// 🔸 Saída:
// A quantidade de pessoas que estão a exatamente k passos (amizades) de distância da pessoa s.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> v;

int bfs(int ini, int tamanho, int target) {
    queue<int> fila;
    fila.push(ini);
    v[ini] = true;

    // distancia
    vector<int> d(tamanho, 0);

    int contador = 0;
    while(!fila.empty()) {
        int n = fila.front();
        fila.pop();

        for (int t : g[n]) {
            if (!v[t]) {
                d[t] = d[n] + 1;
                fila.push(t);
                v[t] = true;

                if (d[t] == target) {
                    contador++;
                }
            }
        }
    }

    return contador;
}

int main() {

    int n, m;
    cin >> n >> m;

    g.resize(n);

    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    v.assign(n, false);

    int s, t;
    cin >> s >> t;

    int saida = bfs(s, n, t);

    cout << saida << endl;
    
    return 0;
}