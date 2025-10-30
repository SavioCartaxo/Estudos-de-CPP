#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    cin.ignore();

    vector<int> v(n + 1);
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    int x;
    for (int i = 1; i <= n; i++){
        ss >> x;
        v[i] = v[i-1] ^ x;
    }

    int a, b;
    for (int i = 1; i <= q; i++){
        cin >> a >> b;
        cout << (v[a-1] ^ v[b]) << endl;
    }

    return 0;
}