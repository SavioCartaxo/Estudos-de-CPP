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

    ll mid_array = (n / 2) + 1, l = mid_array + 1;
    while(k >= 0) {
        
        if (l >= n) {
            break;

        } else if (v[mid_array] == v[l]) {
            l++;

        } else {
            ll dist = l - mid_array;
            ll dif = v[l] - v[mid_array];
            // k -= dist * (v[l] - v[mid_array]);
            
            ll f = k - (dist * dif);
            ll i = 0, r;
            
            while (i <= f) {
                ll meio = (i + f) / 2;

                if ((k - meio) < 0) {
                    f = meio - 1; 
                
                } else {
                    r = meio;
                    i = meio + 1;
                }
            }

            k -= r;
            v[mid_array] = v[l++];
        }

    }

    cout << v[mid_array] + (k / n) << endl;

    return 0;
}