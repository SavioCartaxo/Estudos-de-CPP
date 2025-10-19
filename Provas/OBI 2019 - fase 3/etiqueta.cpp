#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, K, c;
    cin >> n >> K >> c;

    vector<int> v(n+1);
    vector<vector<int>> m(K+1,vector<int>(n+1,-INF));
    m[0][0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        m[0][i] = m[0][i-1] + v[i];
    }

    //DP
    for(int k = 1; k <= K; k++)
        for(int i = K*c; i <= n; i++)
            m[k][i] = max(m[k - 1][i - c], m[k][i - 1]+v[i]);

    cout << m[K][n] << '\n';

    return 0;
}