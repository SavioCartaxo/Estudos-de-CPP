#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vi m(n,0);
    for(int i = 0; i < n; i++) {
        cin >> m[i];
        m[i] = m[i];
    }

    int c = 0;
    int e=0, s=0;

    for (int d = 0; d < n; d++) {
        s += m[d];

        while (s > k && e <= d) {
            s -= m[e];
            e++;
        }

        if (s == k) c++;
    }

    cout << c << '\n';

    return 0;
}