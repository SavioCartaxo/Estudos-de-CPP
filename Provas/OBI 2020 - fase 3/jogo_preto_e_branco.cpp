#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

#define INF -10000000
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int l, c, p, s = 0;
    cin >> l >> c >> p;

    vii m(l, vi(c, INF));

    int a, b;
    for (int i = 0; i < p; i++) {
        cin >> a >> b;
        m[a-1][b-1] = -1; // preto = -1 
    }
    vector<pair<int,int>> v = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // marca os brancos
    for (int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if (m[i][j] == -1) {
                continue;
            }
            
            for (pair<int,int> g : v) {
                int x = i + g.first;
                int y = j + g.second;

                if (x < 0 || x >= l || y < 0 || y >= c ) continue;

                if (m[x][y] == -1) {m[i][j] = 0;} // branco = 0
            }
        }
    }

    // conta vizinhos dos brancos
    for (int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if (m[i][j] < 0) continue;;
            
            for (pair<int,int> g : v) {
                int x = i + g.first;
                int y = j + g.second;

                if (x < 0 || x >= l || y < 0 || y >= c) continue;

                if (m[x][y] >= 0) m[i][j]++;
            }
        }
    }

    // remove vizinhos do branco
    for(int compara = 4; compara > 0; compara--){
        for (int i = 0; i < l; i++) {
            for(int j = 0; j < c; j++) {
                if (m[i][j] == compara) {
                    m[i][j] = INF;
                    for (pair<int,int> g : v) {
                        auto x = i + g.first;
                        auto y = j + g.second;

                        if (x < 0 || x >= l || y < 0 || y >= c) continue;

                        if (m[x][y] >= 0) m[x][y]-=1;
                    
                    }
                }
            }
        }
    }

    for (int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if (m[i][j] == 0) {
                s++;
            }
        }
    }

    cout << s << endl;

    return 0;
}