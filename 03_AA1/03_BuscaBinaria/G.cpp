#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    
    vi v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll i = *max_element(v.begin(), v.end());
    ll f =  accumulate(v.begin(), v.end(), 0LL);
    ll mid, saida;

    while (i <= f) {
        mid = (i + f) / 2;

        ll sa = 0; // contador da soma acumulada
        ll c = 1;  // contador das divisões feitas
        for (ll x : v) {
            sa += x;

            if (sa > mid) {
                sa = x;
                c++;
            }
        }

        if (c <= k) {
            saida = mid;
            f = mid - 1;
        } else {
            i = mid + 1;
        }
        
    }

    cout << saida << endl;

    return 0;
}