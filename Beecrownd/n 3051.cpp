#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

int main() {
    int n, k;
    cin >> n >> k;

    vii m(n, vi(n,0));

    for(int i = 0; i < n; i++) {
        cin >> m[0][i];
    }

    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if (i != 0) {   
                m[i][j] = m[i - 1][j] + m[0][j + i];
                if (m[i][j] == k) c++;
            } else {
                if (m[0][j] == k) c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}