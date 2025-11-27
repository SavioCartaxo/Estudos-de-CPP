#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<ll>


vi crivo(int n) {
    vi lp(n + 1, 0);
    vi primes;
    primes.reserve(n / 10);

    for (ll i = 2; i <= n; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            primes.pb(i);
        }

        for (ll p : primes) {
            if (p > lp[i] || 1LL * p * i > n)
                break;
            lp[p * i] = p;
        }
    }

    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a;
    cin >> n;
    
    vi v = crivo(n);
    
    ll s = 0;
    for (ll i = 3; i <= n; i++) {
        ll c = 0;
        for (ll j = 0; j < (ll) v.size(); j++) {
           if (i % v[j] == 0) {
            c++;
           }

           if (c > 2 || v[j] > i) {break;}
        }

        if (c == 2) {
            s++;
        }
    }

    cout << s << endl;

    return 0;
}