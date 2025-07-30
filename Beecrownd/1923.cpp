#include <bits/stdc++.h>
using namespace std;

map<string, int> nomeParaIndice;
vector<string> indiceParaNome;
vector<vector<int>> grafo;
vector<int> dist;

int getIndice(string nome) {
    if (nomeParaIndice.count(nome)) {
        return nomeParaIndice[nome];
    }

    int novoIndice = (int) indiceParaNome.size();
    nomeParaIndice[nome] = novoIndice;
    indiceParaNome.push_back(nome);
    grafo.push_back({});
    
    return novoIndice;
}

void bfs(int origem) {
    dist.assign(grafo.size(), INT_MAX);
    queue<int> fila;
    dist[origem] = 0;
    fila.push(origem);

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
}

int main() {
    int n, G;
    cin >> n >> G;

    string a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        int u = getIndice(a);
        int v = getIndice(b);
        grafo[u].push_back(v);
        grafo[v].push_back(u); // relação mútua
    }

    int origem = getIndice("Rerisson");
    bfs(origem);

    vector<string> convidados;
    for (int i = 0; i < (int) dist.size(); i++) {
        if (i != origem && dist[i] <= G) {
            convidados.push_back(indiceParaNome[i]);
        }
    }

    sort(convidados.begin(), convidados.end());

    cout << convidados.size() << "\n";
    for (const string& nome : convidados)
        cout << nome << "\n";

    return 0;
}
