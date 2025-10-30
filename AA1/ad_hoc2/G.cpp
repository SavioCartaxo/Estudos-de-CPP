#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    vector<int> v;
    string linha;
    getline(cin, linha);
    stringstream ss(linha);

    int x;
    while (ss >> x) {
        v.push_back(x);
    }
    
    int i = 0, f = 0;
    int contadorAtual = 0, max = 0;
    set<int> s;
    while (f < n) {
        if (!s.count(v[f])) {
            s.insert(v[f++]);
            contadorAtual++;
        } else {
            s.erase(v[i++]);
            contadorAtual--;
        }

        if (contadorAtual > max)
            max = contadorAtual;
    }

    cout << max << endl;

    return 0;
}