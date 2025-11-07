#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef set<ll> s;

// estruturas
ll n, Q, x, a;
s pre, q;

int main() {
    cin >> n >> Q;
    
    for (int i = 1; i <= n; i++) pre.insert(i);
    
    while (Q--) {
        cin >> a;
        if (a == 1) {
            q.insert(*pre.begin());
            pre.erase(*pre.begin());
            
        } else if (a == 2) {
            cin >> x;
            q.erase(x);

        } else {
            cout << *q.begin() << endl;
        }
    }

    return 0;
}
