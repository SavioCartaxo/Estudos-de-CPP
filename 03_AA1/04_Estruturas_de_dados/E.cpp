#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi  vector<ll>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vi v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }



    return 0;
}