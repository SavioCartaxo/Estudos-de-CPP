#include <bits/stdc++.h>
using namespace std;

int main() { 

    int n;
    while (cin >> n && n != 0) {

        vector<vector<int>> v(n, vector<int>(n,0)); // Cria essa matriz preenchida com zeros
        
        int c = 1;
        for (int i = 0; i < n; i++) {
            int m = c;
            for (int j = 0; j < n; j++) {
                v[i][j] = m++;
            }
            c++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j];

                if (j != n -1) {
                    cout << " ";
                }
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}