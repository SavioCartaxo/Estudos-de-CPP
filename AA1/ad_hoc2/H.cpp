#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    map<ll,ll> m;
    ll n, xx;
    cin >> n >> xx;

    cin.ignore();
    string linha;
    getline(cin,linha);
    stringstream ss(linha);
    
    ll w;
    vector<ll> v;
    int i = 0;
    
    while(ss >> w) {
        v.push_back(w);
        m[w] = ++i;
    }

    for (int j = 0; j < n - 2; j++) {
        ll x = xx - v[j];
        for (int i = j+1; i < n - 1; i++) {
            
            ll alvo = x - v[i];
            if (m.count(alvo) && i+1 != m[alvo] && j+1 != m[alvo]) {
                cout << j+1 << ' ' << i+1 << ' ' << m[alvo] << endl;
                return 0;
            }
        }
    } 
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}