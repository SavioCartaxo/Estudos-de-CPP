#include <bits/stdc++.h>
using namespace std;

int main() {
    double m[12][12];
    char t;
    cin >> t;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> m[i][j];

    double s = 0;
    for (int i = 0; i <= 4; i++)
        for (int j = i + 1; j <= 10 - i; j++)
            s += m[i][j];

    cout << fixed << setprecision(1);  // <- isso força a saída no formato decimal com 1 casa

    if (t == 'S')
        cout << s << endl;
    else if (t == 'M')
        cout << s / 30.0 << endl;

    return 0;
}
