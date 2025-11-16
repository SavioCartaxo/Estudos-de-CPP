#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 + 1
#define NEG_INF -INF - 2

int bb(int a, vector<int> v){
    int i = 0;
    int f = v.size() - 1;
    int m;

    while (i <= f) {
        m = (i + f) / 2;
        
        if (v[m] <= a && a < v[m+1]) {
            return m;

        } else if (a < v[m]){
            f = m-1;
        
        } else {
            i = m+1;
        }
    }

    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> vn;
    cin.ignore();
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    int x;
    while (ss >> x){
        vn.push_back(x);
    } 
    vn.push_back(NEG_INF); 
    vn.push_back(INF);
    
    vector<int> vm;
    getline(cin, linha);
    stringstream nn(linha);
    while (nn >> x){
        vm.push_back(x);
    }

    sort(vn.begin(), vn.end());

    for (int i = 0; i < m; i++){
        cout << bb(vm[i], vn);

        if (i != m-1) 
            cout << ' ';
    } cout << endl;

    return 0;
}