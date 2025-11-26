#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
// como uso definetype?

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        vi v(n);
        ll s = 0;    
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
        }

        sort(v.begin(), v.end());
        
        if (n <= 2) {
            cout << -1 << endl;
        } else {
            sort(v.begin(), v.end());
            cout << max(0LL, v[n/2] * 2 * n - s + 1) << endl;
        }
    }

    return 0;
}
