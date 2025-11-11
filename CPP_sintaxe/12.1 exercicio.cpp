#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);

    int a, b;
    for (int i  = 0; i < m; i++) {
        cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        cout << "Vertice " << i << " conectado com: ";
        for (int v : g[i]) {
            cout << v;
            if (i != (int)g[i].size() - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}