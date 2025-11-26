// Enunciado:
// Você recebe uma grade (matriz) 2D composta por '1' (terra) e '0' (água). 
// Uma ilha é formada por regiões de terra conectadas horizontalmente ou verticalmente (não na diagonal).

// Seu objetivo é contar quantas ilhas distintas existem na grade.

#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> vis;
vector<vector<char>> v;

void bfs(int l, int c) {
    vis[l][c] = true;
    
    if (!vis[l-1][c] && v[l-1][c] == '1')
        bfs(l-1, c);
    
    if (!vis[l][c-1] && v[l][c-1] == '1')
        bfs(l, c-1);
    
    if (!vis[l][c+1] && v[l][c+1] == '1')
        bfs(l, c+1);
    
    if (!vis[l+1][c] && v[l+1][c] == '1')
        bfs(l+1, c);

}

int main() {

    int l, c;

    cin >> l >> c;

    v.resize(l + 2, vector<char>(c + 2, '0'));
    
    for (int j = 1; j <= l; j++) {
        for (int i = 1; i <= c; i++) {
            cin >> v[j][i];
        }
    }

    int ilhas = 0;
    vis.resize(l + 2, vector<bool>(c + 2, false));

    for (int j = 1; j <= l; j++) {
        for (int i = 1; i <= c; i++) {
            if (!vis[j][i] && v[j][i] == '1') {
                bfs(j, i);
                ilhas++;
            }
        }
    }

    cout << ilhas << endl;
    
    return 0;
}