#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, t, x;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < q; i++){
        cin >> t >> x;

        if (t == 1){
            v[x] = 1 - v[x];
        } else {
            vector<int> v2 = v;
            sort(v2.begin(), v2.end(), greater<int>());
            cout << v2[x] << endl;
        }
    }
    
    return 0;
}