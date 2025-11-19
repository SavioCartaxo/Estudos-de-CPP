#include <bits/stdc++.h>
using namespace std;

#define ll long long
using vi = vector<ll>;

ll soma(vi &v, ll &n, ll &t) {
    ll s = 0;
    for (ll i : v){
        s += (n/i);
        if (s >= t) return s;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;
    vi v(n);
    for (ll i = 0; i < n; i++) { 
        cin >> v[i];
    }
    
    ll i = 0;
    ll f = 1e18;
    ll r;

    while (i <= f) {
        ll m = (i + f) / 2;
        if (soma(v, m, t) >= t){
            r = m;
            f = m - 1;
        }
        else {
            i = m + 1;
        }
    }

    cout << r << endl;

    return 0;
}