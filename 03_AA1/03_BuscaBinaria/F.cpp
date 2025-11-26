#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vi v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll mid_array = (n / 2), l = mid_array + 1;
    
    while(k > 0) {
        
        if (l >= n) {
            break;
        } else {
            ll sub = (l - mid_array) * (v[l] - v[mid_array]);
            
            if (sub <= k) {
                k -= sub;
            } else {
                break;
            }

            v[mid_array] = v[l++];
        }
    }
    
    cout << v[mid_array] + ((int) (k / (l - mid_array))) << endl;
    return 0;
}