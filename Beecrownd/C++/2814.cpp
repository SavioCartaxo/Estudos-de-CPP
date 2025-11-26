#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int k, j;
    for(int i = 0; i < n; i++) {
        cin >> j >> k;

        string s;
        int lf = 0, cf = 0, lj = 0, cj = 0;
        for(int J = 0; J < k; J++) {
            cin >> s;
            // se nao passar, eu faço um continue aqui
            for (int p = 0; p < (int) s.size(); p++) {
                if (s[p] == 'F') {
                    lf = J * 10;
                    cf = p * 10;
                }

                if (s[p] == 'J') {
                    lj = J * 10;
                    cj = p * 10;
                }
            }
        }

        int l = abs(lj - lf);
        int c = abs(cj - cf);

        int d = sqrt(pow(l,2) + pow(c,2));

        int sm = j / pow(0.99,d);

        cout << sm << " dBs" << endl;
    }

    return 0;
}