#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll l = 1, r = n*n;

    ll saida;
    while (l <= r) {
        ll mid = (l + r) / 2;

        ll s = 0;
        for (ll i = 1; i <= n; i++) {
            s += min((ll)n, mid / i);
        }

        if (s >= ((n*n + 1) / 2)) {
            saida = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << saida << endl;

    return 0;
}