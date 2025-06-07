#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> visitado;

void dfs(int u) {
    visitado[u] = true;

    for (int v: g[u]) {
        if (!visitado[v]) {
            dfs(v);
        }
    }
}


int main(){

    int n = 4;
    
    g.resize(4);
    visitado.assign(n, false);

    g[0].push_back(1);
    g[1].push_back(0);
    
    g[2].push_back(1);
    g[1].push_back(2);
    
    g[3].push_back(1);
    g[1].push_back(3);

    return 0;
}