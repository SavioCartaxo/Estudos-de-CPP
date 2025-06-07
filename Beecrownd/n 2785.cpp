#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0;
    vector<vector<int>> m(n);

    // Leitura da matriz
    for (int i = 0; i < n; i++) {
        int val;
        for (int j = 0; j < n; j++) {
            cin >> val;
            m[i].push_back(val);
        }
    }

    int t = 0;
    while (!m[0].empty()) {
        vector<int> lm;

        for (int c = 0; c < m[0].size(); c++) {
            int sc = 0;
            for (int l = t; l < n; l++) {
                sc += m[l][c];
            }
            lm.push_back(sc);
        }

        // Acha o índice da menor soma
        int menor = lm[0];
        int im = 0;
        for (int i = 1; i < lm.size(); i++) {
            if (lm[i] < menor) {
                menor = lm[i];
                im = i;
            }
        }

        s += menor;

        // Remove a coluna 'im' de cada linha
        for (int i = 0; i < n; i++) {
            m[i].erase(m[i].begin() + im);
        }

        t += 1;
    }

    cout << s << endl;
    return 0;
}