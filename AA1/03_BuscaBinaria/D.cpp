#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll a;
    while (n--){
        cin >> a;

        ll i = 0;
        ll f = 1e18;
        ll m;

        while (i <= f) {
            m = (i + f) / 2;

            if (m - sqrt(m) >= a) {
                f = m-1;
            } else {
                i = m+1;
            }
        }

        cout << m << endl;
    }

    return 0;
}