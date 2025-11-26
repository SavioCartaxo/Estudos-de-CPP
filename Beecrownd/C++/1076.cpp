#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> m;
vector<bool> visitados; 
int contador = 0;

bool In(vector<int> h, int n) {
        for (int a: h)
            if (a == n)
                return true;

    return false;
}

void bfs(int ini) { //breadth first search
    queue<int> q;
    q.push(ini);
    visitados[ini] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : m[u]) {
            if (!visitados[v]) {
                q.push(v);
                visitados[v] = true;
                contador++;
            }
        }
    }
}


int main() {
    int x;
    cin >> x;
    for (int p = 0; p < x; p++) {
        int o; // origem
        int v, a; // Vértices(nós) e arestas

        cin >> o >> v >> a;

        m.clear();
        m.resize(v);

        visitados.assign(v, false);

        int a1, a2;
        for (int i = 0; i < a; i++) {
            cin >> a1 >> a2;

            if (!In(m[a1], a2)) {
                m[a1].push_back(a2);
                m[a2].push_back(a1);
            }
        }

        bfs(o);
        cout << contador * 2 << endl;
    
        contador = 0;
    }
    return 0;
}