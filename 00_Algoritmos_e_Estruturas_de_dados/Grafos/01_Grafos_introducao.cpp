// Você recebe um grafo não direcionado com n vértices numerados de 0 a n-1, e m arestas. Sua tarefa é construir o grafo usando lista de 
// adjacência e imprimir os vizinhos de cada vértice em ordem crescente.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n);

    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        sort(v[i].begin(), v[i].end());
    }

    for (int i = 0; i < n; i++) {
        cout << i << ":";
        for (int j : v[i]) {
            cout << ' ' << j ;
        }

        cout << endl;
    }

    return 0;
}