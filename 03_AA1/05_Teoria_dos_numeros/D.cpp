#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi  vector<ll>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vi v(1e6 + 1, 1);
    for (int i = 2; i <= 1e6; i++) {
        
        int atual = i;
        while (atual <= 1e6) {
            v[atual]++;
            atual += i;
        }
    }

    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << v[a] << endl;
    }
    
    return 0;
}