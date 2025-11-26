#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = a - b - c;
    int maior = max({b, c, d});

    cout << maior << endl;

    return 0;
}
