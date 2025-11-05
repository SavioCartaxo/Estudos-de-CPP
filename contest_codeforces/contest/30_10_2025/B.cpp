#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int t, l, c;
    cin >> t;
    
    while (t-- > 0) {
        cin >> l;
        vector<vector<char>> m(l, vector<char>(l, '.'));
        
        // quando o tamanho da matriz é <= 2
        // if (l <= 2) {
        //     cout << "YES" << endl;
        //     continue;
        //}


        c = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                cin >> m[i][j];

                if (m[i][j] == '#') {
                    c++;
                }
            }
        }

        // quando só têm um ou nenhum preto
        if (c <= 1) {
            cout << "YES" << endl;
            continue;
        }

        // quando a entrada ja tem mais de 2 pretos seguidos na linha
        bool passaDireto = false;
        for (int i = 0; i < l; i++) {
            c = 0;
            for (int j = 0; j < l; j++) {
                if (m[i][j] == '#') {
                    c++;
                } else {
                    c = 0;
                }

                if (c > 2) {
                    cout << "NO" << endl;
                    passaDireto = true;
                    continue;
                }
            }
            if (passaDireto) continue;
        }

        if (passaDireto) continue;

        // quando a entrada ja tem mais de 2 pretos seguidos na coluna
        for (int i = 0; i < l; i++) {
            c = 0;
            for (int j = 0; j < l; j++) {
                if (m[j][i] == '#') {
                    c++;
                } else {
                    c = 0;
                }

                if (c > 2) {
                    cout << "NO" << endl;
                    passaDireto = true;
                    continue;
                }
            }
            if (passaDireto) continue;
        }

        if (passaDireto) continue;

        
        for (int i = 0; i < l; i++) {
            for (int j = 1; j < l - 1; j++) {
                if (m[i][j-1] == '#' && m[i][j+1] == '#') {
                    cout << "NO" << endl;
                    passaDireto = true;
                } 
            }
            if (passaDireto) continue;
        }

        for (int i = 0; i < l; i++) {
            for (int j = 1; j < l - 1; j++) {
                if (m[i][j-1] == '#' && m[i][j+1] == '#') {
                    cout << "NO" << endl;
                    passaDireto = true;
                } 
            }
            if (passaDireto) continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}