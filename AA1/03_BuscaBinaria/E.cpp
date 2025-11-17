#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

#define INF 1e10
#define NEG_INF -INF

int bb(int a, vi v){
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

vi ler() {
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    int x;
    vi res;
    while (ss >> x) res.push_back(x);
    return res;
}


int main(){
    int n, m;
    cin >> n >> m;

    cin.ignore();
    vi vn = ler();
    vn.push_back(NEG_INF); 
    vn.push_back(INF);
    
    vi vm = ler();

    sort(vn.begin(), vn.end());

    ostringstream oss;
    oss << bb(vm[0], vn);
    for (int i = 1; i < m; i++) {
        oss << ' ';
        oss << bb(vm[i], vn);
    }

    cout << oss.str() << endl;


    return 0;
}