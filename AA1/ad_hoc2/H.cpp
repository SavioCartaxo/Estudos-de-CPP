#include <bits/stdc++.h>
using namespace std;

int main(){
    map<long long,long long> m;
    long long n, xx;
    cin >> n >> xx;

    cin.ignore();
    string linha;
    getline(cin,linha);
    stringstream ss(linha);
    
    long long w;
    vector<long long> v;
    int i = 0;
    
    while(ss >> w) {
        v.push_back(w);
        m[w] = ++i;
    }

    bool b = false;
    for (long long j = 0; j < n - 2; j++) {
        long long x = xx - v[j];
        for (long long i = j+1; i < n - 1; i++) {
            
            long long alvo = x - v[i];
           if (m.count(alvo) && i+1 != m[alvo] && j+1 != m[alvo]) {
                cout << j+1 << ' ' << i+1 << ' ' << m[alvo] << endl;
                b = true;
                break;
            }
        }
        
        if (b) break ;
    } 

    if (!b) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}