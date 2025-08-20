#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int n;
    cin >> n;

    vi v = {0,1};
    for (int i=1; i<=n; i++){
        v.push_back(v[i] + v[i - 1]);
    }

    for(int i = 0; i < n; i++) {
        cout << v[i];

        if ( i != n - 1) {
            cout << ' ';
        }
    }

    cout << endl;

    return 0;
}