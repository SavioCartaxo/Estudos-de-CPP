#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> visitado;

int contador = 0;

int dfs(int x) {
    visitado[x] = true;
    for (int v : g[x]) {
        if (!visitado[v]) {
            contador += 1;    
            contador +=  dfs(v);
        }
    }
    
    return contador;
}

int main(){
    int t;
    cin >> t;

    int n;
    int v, a;
    for (int i = 0; i < t; i++) {
        cin >> n; // onde começa e termina
        cin >> v >> a;

        g.clear();
        g.resize(v);

        visitado.assign(v, false);

        int x, y;
        for(int i = 0; i < a; i++) {
            cin >> x >> y;

            g[x].push_back(y);
        }

        int c = dfs(n);
        cout << c << endl;
    }
    
    return 0;
}