#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s, a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (abs(a - b) <= d) {
        s = b;
    } else {
        s = c;
    }

    cout << s << '\n';

    return 0;
}