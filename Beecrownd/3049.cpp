#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, t;
    cin >> b >> t;

    int areaTotal = 11200;
    int areaFelix = 0, sobra;
    if (b > t) {
        areaFelix += 70 * t;
        areaFelix += 70 * (b - t) / 2;
    } else if (b < t) {
        areaFelix += 70 * b;
        areaFelix += 70 * (t - b) / 2;
    } else {
        areaFelix += t * 70;
    }

    sobra = areaTotal - areaFelix;

    int n;
    if (areaFelix > sobra) {
        n = 1;
    } else if (areaFelix < sobra) {
        n = 2;
    } else n = 0;

    cout << n << endl;
    return 0;
}