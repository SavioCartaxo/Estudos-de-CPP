#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> m(n+2, vector<int>(n+2, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char a;
            cin >> a;
            m[i][j] = a - '0';
        }
    }
    
    int p[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

    for(int d = 0; d < q; d++) {
        vector<vector<int>> nova = m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int s = 0;    
                for (int x = 0; x < 8; x++) {
                    s += nova[i + p[x][0]][j + p[x][1]];
                }

                int c = nova[i][j];
                if ((c == 0 && s == 3) || (c == 1 && (s == 2 || s == 3))) {
                    m[i][j] = 1;
                } else
                    m[i][j] = 0;
                
            }
        }
    }

    for (int l = 1; l <= n; l++) {
        for (int c = 1; c <= n; c++) {
            cout << m[l][c];
        }
        cout << endl;
    }

    return 0;
}