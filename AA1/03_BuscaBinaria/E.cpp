#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

#define INF 1e10
#define NEG_INF -INF

int bb(int a, vi &v){
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
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    cin.ignore();
    vi vn(n+2);
    vn[0] = (NEG_INF); 
    vn[n+1] = INF;
    
    for (int i = 1; i <= n; i ++) {
        cin >> vn[i];
    }
    
    vi vm(m);
    for (int i = 0; i < m; i ++) {
        cin >> vm[i];
    }
    sort(vn.begin(), vn.end());

    cout << bb(vm[0], vn);
    for (int i = 1; i < m; i++) {
        cout << ' ' << bb(vm[i], vn);
    }

    return 0;
}