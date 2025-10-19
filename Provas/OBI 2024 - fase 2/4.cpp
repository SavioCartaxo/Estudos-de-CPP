#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi> ;

vii g;
vector<vector<bool>> visitados;
vii viz;

vii bfs (int l, int c, int poder) {
    visitados[l][c] = true;
    poder += g[l][c];
    
    if (!visitados[l-1][c] && g[l-1][c] != 0)
        viz.push_back({l - 1, c, g[l-1][c]});
    
    if (!visitados[l+1][c] && g[l+1][c] != 0)
        viz.push_back({l + 1, c, g[l+1][c]});
    
    if (!visitados[l][c-1] && g[l][c-1] != 0)
        viz.push_back({l, c - 1, g[l][c-1]});

    if (!visitados[l][c+1] && g[l][c+1] != 0)
        viz.push_back({l, c + 1, g[l][c+1]});
        

    for(vi vizi : viz) {
        if (vizi[2] <= poder) {
            visitados[vizi[0]][vizi[1]] = true;
            viz = bfs(vizi[0], vizi[1], vizi[2]);
            viz.erase(remove(viz.begin(), viz.end(), vizi), viz.end());
        }
    }

    if (!viz.empty())
        return viz;
    
    return {{poder}};
}

int main() {

    int n, m;
    cin >> n >> m;

    g.resize(n + 2, vi (m + 2, 0));
    viz.resize(n);
    visitados.resize(n + 2, vector<bool>(m + 2, false));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << bfs(i, j, 0)[0][0] << ' ';
        }
        cout << endl;
    }

    return 0;
}