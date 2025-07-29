#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, G;
    cin >> n >> G;

    // Mapeia nome da pessoa para um índice
    map<string, int> nomeParaIndice;
    vector<string> indiceParaNome; // índice -> nome

    vector<vector<int>> grafo; // grafo com índice inteiro

    auto getIndice = [&](const string& nome) {
        if (nomeParaIndice.count(nome)) return nomeParaIndice[nome];
        int novoIndice = (int) indiceParaNome.size();
        nomeParaIndice[nome] = novoIndice;
        indiceParaNome.push_back(nome);
        grafo.push_back({});
        return novoIndice;
    };

    // Lê relações e constrói o grafo
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        int u = getIndice(a);
        int v = getIndice(b);
        grafo[u].push_back(v);
        grafo[v].push_back(u); // a relação é mútua
    }

    // Prepara BFS
    int origem = nomeParaIndice["Rerisson"];
    vector<int> dist(grafo.size(), INT_MAX);
    queue<int> fila;
    fila.push(origem);
    dist[origem] = 0;

    // BFS para calcular distâncias
    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for (int vizinho : grafo[atual]) {
            if (dist[vizinho] == INT_MAX) {
                dist[vizinho] = dist[atual] + 1;
                fila.push(vizinho);
            }
        }
    }

    // Coletar os convidados com distância ≤ G
    vector<string> convidados;
    for (int i = 0; i < (int) dist.size(); i++) {
        if (i != origem && dist[i] <= G) {
            convidados.push_back(indiceParaNome[i]);
        }
    }

    sort(convidados.begin(), convidados.end());

    // Imprime resultado
    cout << convidados.size() << "\n";
    for (const string& nome : convidados)
        cout << nome << "\n";

    return 0;
}
