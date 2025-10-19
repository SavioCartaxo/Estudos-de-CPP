#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

#define INF 1e9
int n;
vector<vector<pair<int, int>>> grafo;

int djikstra(int o, int t) {
    vector<bool> visitado(n, false);
    vector<int> distancia(n, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;

    distancia[o] = 0;
    pq.push({0, o}); // distancia e depois o ponto

    int vizinho;
    while (!pq.empty()) {
        int distanciaDessePonto = pq.top().first;
        int pontoAtual = pq.top().second;
        pq.pop();

        if (visitado[pontoAtual] || (distanciaDessePonto < t && distanciaDessePonto != 0)) continue; 
        visitado[pontoAtual] = true; // tenho a impressao que isso ta errado

        for (pair<int,int> viz : grafo[pontoAtual]) {
            vizinho = viz.first;   // vizinho 
            int peso = viz.second; // distancia

            if (distancia[pontoAtual] + peso < distancia[vizinho]) {
                distancia[vizinho] = distancia[pontoAtual] + peso;
                pq.push({distancia[vizinho], vizinho});
            }
        }
    }

    int d, saida = -1;
    for (pair<int,int> viz : grafo[o]) {
        vizinho = viz.first;
        d = viz.second;

        saida = max(saida, distancia[vizinho] + d);
    }

    return saida;
}

int main() {
    int r;
    cin >> n >> r;
    // e = numero de estações
    // r = numero de ramos
    n++;
    grafo.resize(n);

    int a, b, c;
    for (int i = 0; i < r;i++) {
        cin >> a >> b >> c;

        grafo[a].push_back({b, c});
        grafo[b].push_back({a, c});
    }

    int k, x, t;
    cin >> k;

    for (int i = 0; i < k;i++) {
        cin >> x >> t;
        // x = origem
        // t = comprimento do trem

        cout << djikstra(x, t) << endl;
    }

    return 0;
}