#include <bits/stdc++.h>
using namespace std;

main () {
    int n;
    cin >> n;

    int n0, n1, n2, n3;
    
    n1 = pow((n - 2),2) * 6;
    n2 = (n - 2) * 12;
    n3 = 8;
    n0 = pow(n, 3) - n1 - n2 - 8;

    cout << n0 << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;

    return 0;
}