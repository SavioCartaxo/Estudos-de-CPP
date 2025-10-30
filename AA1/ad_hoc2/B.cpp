#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n, q, l, r, k, x, i;
    long long s, ss;
    string linha;
    vector<long long> v;
    for (int p = 0; p < t; p++) {
        v = {0};
        i = 0;
        
        cin >> n >> q; // tamanho do array, n° consultas
        cin.ignore();

        getline(cin,linha);
        stringstream fluxo(linha);
        while (fluxo >> x) {
            v.push_back(v[i++] + x);
        }

        for (int x = 0; x < q; x++) {
            cin >> l >> r >> k;
            ss = v[r] - v[l - 1];
            s = v[n] - ss + k * (r - l + 1);
            
            if (s % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }

    }

    return 0;
}