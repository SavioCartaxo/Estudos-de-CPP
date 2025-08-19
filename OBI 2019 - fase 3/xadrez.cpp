#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;

int main() {
    int n, m;
    cin >>  n >> m;

    int s = 0;

    if (m == 0) {
        s = n;
    }

    if (m == 1) {
        s =  n * (n - 1);
    }

    int k = n;
    if (m == 2) {
        while(k != 2) {
            s += (k - 2) * (n - k + 1);
            k--;
        }
    }

    cout << s << endl;

    return 0;
}