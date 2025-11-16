#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int n, q, t, x;
    cin >> n >> q;

    string linha;
    cin.ignore();
    getline(cin, linha);
    stringstream ss(linha);

    vi v(n);
    for (int i = 0; i < n; i++) {
        ss >> v[i];
    }

    int c0 = 0, c1 = 0;
    for (int i: v) {
        if (i == 0) {
            c0++;
        } else {
            c1++;
        }
    }

    vi saida;
    for (int i = 0; i < q; i++){
        cin >> t >> x;

        x--;
        if (t == 1){

            if(v[x] == 1) {
                v[x] = 0;
                c0++;
                c1--;
            } else {
                v[x] = 1;
                c0--;
                c1++;
            }

        } else {
            if (x + 1 <= c1) {
                saida.push_back(1);
            } else {
                saida.push_back(0);
            }
        }
    }

    for (int i: saida) {
        cout << i << endl;
    }

    return 0;
}