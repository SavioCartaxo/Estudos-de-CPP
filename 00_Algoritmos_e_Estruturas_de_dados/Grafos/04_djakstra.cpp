#include <bits\stdc++.h>
using namespace std;

// procura a menor distancia
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> g(n);
    vector<int> d(n, INT_MAX);

    int u, v, w;

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;

        g[u].push_back({v,w});
    }

    int inicio, fim;
    cin >> inicio >> fim;

    // djakstra
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0, inicio});
    d[inicio] = 0;

    while (!pq.empty()) {
        int menordistancia = pq.top().first;
        int atual = pq.top().second;
        pq.pop();

        if (menordistancia > d[atual]) continue;

        for (auto blu : g[atual]) {
            int v = blu.first;
            int peso = blu.second;
            if (d[atual] + peso < d[v]) {
                d[v] = d[atual] + peso;
                pq.push({d[v], v});
            }
        }

    }

    cout << d[fim] << endl;

    return 0;
}