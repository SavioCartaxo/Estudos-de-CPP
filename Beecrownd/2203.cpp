#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {

    double x1, y1, x2, y2, v, r1, r2;
    double x, y;
    double anda;
    double raio;
    while (cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2) {

        x = abs(x1 - x2);
        y = abs(y1 - y2);

        anda = v * 1.5;
        anda += sqrt(pow(x, 2) + pow(y, 2));

        raio  = r1 + r2;

        if (raio >= anda) {
            cout << 'Y' << '\n';
        } else {
            cout << 'N' << '\n';
        }
    }
    return 0;
    }