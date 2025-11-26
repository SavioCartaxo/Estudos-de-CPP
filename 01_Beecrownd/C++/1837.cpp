#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q;
    if (a > 0 && b > 0) 
        q = a / b;
    else if (a < 0 && b < 0) 
        if (a % b != 0) q = a / b + 1;
        else q = a / b;
    else if (a < 0) 
        if (a % b != 0) q = a / b - 1;
        else q = a / b;
    else if (b < 0)
        q = a / b;
    else q = 0;
    
    int r = a - q * b;

    cout << q << ' ' << r << endl;

    return 0;
}