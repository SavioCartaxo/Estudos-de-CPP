#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi  vector<ll>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, a = 0, b;
    cin >> n;

    map<int, int> m;
    m[0]++;
    ll s = 0;

    for (int i = 0; i < n; i++) {
        cin >> b;

        a += b;
        a = ((a % n) + n) % n;
        s += m[a];
        m[a]++;
    }

    cout << s << endl;

    return 0;
}