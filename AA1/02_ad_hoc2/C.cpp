#include <bits/stdc++.h>
using namespace std;

 int main(){
     freopen("bcount.in", "r", stdin);
     freopen("bcount.out", "w", stdout);
    
    int n, q;
    cin >> n >> q;

    vector<vector<int>> m(3, vector<int>(n+1, 0));

    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;

        if (x == 1) {
            m[0][i] = m[0][i-1] + 1;
            m[1][i] = m[1][i-1];
            m[2][i] = m[2][i-1];

        } else if (x == 2) {
            m[0][i] = m[0][i-1];
            m[1][i] = m[1][i-1] + 1;
            m[2][i] = m[2][i-1];
        
        } else {
            m[0][i] = m[0][i-1];
            m[1][i] = m[1][i-1];
            m[2][i] = m[2][i-1] + 1;
        }
    }
    int a, b;

    while (q-- > 0) {
        cin >> a >> b;
        cout << m[0][b] - m[0][a-1] << ' ' << m[1][b] - m[1][a-1] << ' ' << m[2][b] - m[2][a-1] << endl;
    }

    return 0;
}