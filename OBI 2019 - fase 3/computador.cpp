#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
    
    int n, m;
    cin >> n >> m;

    vi v(n+1, 0);

    int a, i, V;
    for(int l = 0; l < m; l++) {
        cin >> a;

        if(a != 3) {
            cin >> i >> V;
        } else {
            cin>> i;
        }

        if (a == 1) {

        while (V > 0 && i <= n) {
            v[i]+=V;

            V--;
            i++;
        }

        } else if (a == 2) {

            while (V > 0 && i >= 1) {
                v[i]+=V;

                V--;
                i--;
            }

        } else if (a == 3) {
            cout << v[i] << endl;
        }
    }

    return 0;
}