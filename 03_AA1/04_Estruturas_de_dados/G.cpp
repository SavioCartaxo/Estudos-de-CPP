#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    map<string, int> m;
    string a;
    ll s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a]++;

        if (m[a] > s) s = m[a];
    }

    cout << s << endl;
    return 0;
}