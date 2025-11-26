#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> m(n);

    // Leitura da matriz
    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            m[i].push_back(x);
        }
    }

    int s = 0;
    vector<int> lista; // soma das colunas
    
    while(n != 0){
        lista.clear();
        for (int c = 0; c < n; c++) {
            int sco = 0;
            for (int l = 0; l < n; l++) {
                sco += m[l][c];
            }
            lista.push_back(sco);
        }

        int menor = lista[0];
        int im = 0;
        for (int i = 1; i < (int)lista.size(); i++) {
            if (lista[i] < menor) {
                menor = lista[i];
                im = i;
            }
        }

        m.erase(m.begin());
        for (int i = 0; i < (int)m[0].size(); i++) {
            m[i].erase(m[i].begin() + im);
        }

        s += menor;
        n -= 1;
    }
    
    cout << s << endl;
    return 0;
}