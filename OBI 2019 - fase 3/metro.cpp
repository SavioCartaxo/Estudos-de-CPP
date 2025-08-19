#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;

vii g1;
vii g2;

bool sotemumou(vi g) {

    for(int i = 0; i < (int) g.size(); i++) {
        if(g[i] > 2) {
            return false;
        }
    }

    return true;
}

vi numerovizinho(vii g) {
    vi s((int) g.size(), 0);
    
    for(int i = 0; i < (int) g.size(); i++) {
        s[i] = (int) g[i].size();
    }

    return s;
}

int saida(vii n) {
    vi v = numerovizinho(n);
    while(!sotemumou(v)) {
        vii g = n;
        for (int i = 0; i < (int) n.size(); i++) {
            
            if(((int) n[i].size()) == 1) {
                int vizinho = n[i][0] - 1;

                v[i]--;
                v[vizinho]--;

                g[i].erase(remove(g[i].begin(), g[i].end(), vizinho+1), g[i].end());
                g[vizinho].erase(remove(g[vizinho].begin(), g[vizinho].end(), i+1), g[vizinho].end());
            }

            if(sotemumou(v)) {
                break;
            }
        }

        n = g;
    }

    for(int i = (int) v.size() - 1; i >= 0; i--) {
        if(v[i] == 2) {
            return i + 1;
        }
    }

}

int main() {
    int n, m;
    cin >> n >> m;

    g1.resize(n);
    g2.resize(m);

    int a, b;
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        a--;
        b--;
        g1[a].push_back(b + 1);
        g1[b].push_back(a + 1);
    }

    for (int i = 0; i < m - 1; i++) {
        cin >> a >> b;
        a--;
        b--;
        g2[a].push_back(b + 1);
        g2[b].push_back(a + 1);
    }

    cout << saida(g1) << ' ' << saida(g2);

    return 0;
}