#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll s = 0, a;
    vi v(n + 1); v[0] = 0; // Tive um problema com indexação, fui burro de nao colocar v(n+1)
    map<ll, ll> m; m[0] = 1;

    for (ll i = 1; i <= n; i++) {
        cin >> a;
        v[i] = a + v[i-1];

        // Não precisa fazer isso.

        // if (m.count(v[i])) {
        //     m[v[i]]++;
        // } else {
        //     m[v[i]] = 1;
        // }

        ll precisa = v[i] - k;
        
        if (m.count(precisa)) {
            s += m[precisa];
        }

        m[v[i]]++; // Tive problema aqui também, preciso incrementar o m[v[i]] só depois de fazer as operações
    }

    cout << s << endl;

    return 0;
}