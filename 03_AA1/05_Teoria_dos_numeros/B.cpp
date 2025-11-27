#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<ll>
#define MAX 8 * 1e6

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // p(n) ​< n(ln(n)+ln(ln(n)))
    
    // crivo
    vector<bool> vb(MAX + 1, true);
    vb[0] = false;
    vb[1] = false;
    for (ll i = 2; i * i <= MAX; i++) { // i * i
        ll atual = i*2;
        if (vb[i]){    
            while (atual <= MAX) {
                vb[atual] = false;
                atual += i;
            }
        }
    }

    vi v(5 * 1e5 + 1);
    ll p = 1;
    for (ll i = 1; i <= MAX; i++) {
        if(vb[i]) {
            v[p++] = i;
        }

        if (p == 5 * 1e5 + 1) {
            break;
        }
    }

    ll n, a;
    cin >> n;
    
    cout << v[n] << endl;

    return 0;
}