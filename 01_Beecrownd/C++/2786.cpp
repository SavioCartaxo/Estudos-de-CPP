#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, c;
    cin >> l >> c;

    int a, b;
    a = 2 * (l + c - 2);

    b = l * c + ((l - 1) * (c - 1) );

    cout << b << endl << a << endl;

    return 0;
}