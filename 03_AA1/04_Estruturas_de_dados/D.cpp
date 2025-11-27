#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi  vector<ll>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k, a;
    cin >> n >> k;

    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> a;
        v[i] = {a, i + 1};
    }

    sort(v.begin(), v.end());

    for (int idx = 0; idx < n; idx++) {

        ll wanted = k - v[idx].first;
        ll i = idx + 1;
        ll f = n - 1;
        
        while (i < f) {

            ll test = v[i].first + v[f].first;

            if (test == wanted) {
                cout << v[idx].second << ' ' << v[i].second << ' ' << v[f].second << "\n";
                return 0 ;
            }

            if (test > wanted) {
                f--;
            } else {
                i++;
            }
        }

    }

    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}