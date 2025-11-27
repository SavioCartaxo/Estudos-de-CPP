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

    ll a, b;
    vi A, B;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        A.pb(a); B.pb(b);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll p1 = 0, p2 = 0;
    ll cont_atual = 0, cont_max = 0;
    while(true) {
        if (p1 >= n){
            break;
        }
    
        if (A[p1] < B[p2]) {
            p1++;
            cont_atual++;
        } else if (A[p1] > B[p2]) {
            p2++;
            cont_atual--;
        }

        cont_max = max(cont_atual, cont_max);
    }

    cout << cont_max << endl;

    return 0;
}