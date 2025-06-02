#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    string s;
    if ((a > b && c >= b) || (b > a && c > b && c-b >= b-a) || (b < a && c < b && b-c < a-b) || (a == b && c > b))
        s = ":)";
    else
        s = ":(";

    cout << s << endl;

    return 0;
}