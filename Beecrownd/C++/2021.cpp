#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, p;

    while (cin >> m >> n >> p && (m != 0 && n != 0 && p != 0)) {

        int s = 0;
        int a;

        for (int i = 0; i < p; i++) {
            cin >> a;
            if (a % n != 0) a = (a % n);
            else a = n;
            
            a = n - a + 1;
            s += a;
        }

        cout << "Lights: " << s << endl;

    }

    return 0;
}