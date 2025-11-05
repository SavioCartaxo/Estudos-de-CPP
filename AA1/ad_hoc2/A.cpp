#include <bits/stdc++.h>
using namespace std;

// obs.: sempre usar long long em soma acumulada

int main(){
    int n, q;
    cin >> n >> q;
    cin.ignore();

    vector<long long> v(n+1);
    v[0] = 0;
    string linha;
    getline(cin, linha);
    stringstream ss(linha);

    long long s = 0, x, d = 1;
    while (ss >> x){
        s += x;
        v[d++] = s;
    }

    int a, b;
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        cout << v[b] - v[a-1] << endl;
    }

    return 0;
}