#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int t, l, c;
    cin >> t;
    
    while (t-- > 0) {
        cin >> l;
        vector<vector<char>> m(l, vector<char>(l, '.'));
        c = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                cin >> m[i][j];

                if (m[i][j] == '#') {
                    int x = i;
                    int y = j;
                    c++;
                }
            }
        }

        // quando só têm um ou nenhum preto
        if (c <= 1) {
            cout << "YES" << endl;
            continue;
        }

        // Só precisa checar se eles estão todos na mesma linha.
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                if (m[i][j] == '#') {
                    
                }
            }
        }
   }

    return 0;
}