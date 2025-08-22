#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vi v(n+1,0);
    v[n] = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int c = 0;
    if (k != 0){
        int s = 0, e=0;
        for (int d = 0; d < n; d++) {
            s += v[d];

            while (s > k) {
                s -= v[e];
                e++;
            }

            if (s == k) c++;
        }
    } else {
        int z = 0;
        for (int i = 0; i <= n; i++) {
            if (v[i] == 0) {
                z++;
            } else {
                while(z != 0) {
                    c += z;
                    z--;
                }
            }
        }
    }

    cout << c << '\n';

    return 0;
}