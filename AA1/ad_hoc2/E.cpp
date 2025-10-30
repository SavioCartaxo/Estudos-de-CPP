#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    int n, x;
    cin >> n >> x;

    cin.ignore();
    string linha;
    getline(cin,linha);
    stringstream ss(linha);
    
    int w;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        ss >> w;
        v.push_back(w);
        m[w] = i;
    }
    
    for (int i = 0; i < n; i++) {

        int alvo = x - v[i];
        if (m.count(alvo) && i+1 != m[alvo]) {
            cout << i+1 << ' ' << m[alvo] << endl;
            break;
        }

        if (i+1 >= n) 
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}