#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int mmc(int a, int b) {
    return (a * b / mdc(a, b));
}

int main() {
    int a, b, c, d;
    char z, o;
    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        cin >> a >> z >> b >> o >> c >> z >> d;

        string r1 = "", r2 = "";

        if (o == '+') {
            int mm = mmc(b, d);
            int a1 = mm / b * a;
            int c1 = mm / d * c;

            r1 = to_string((a * d) + (c * b)) + "/" + to_string(b * d);
            r2 = to_string((a1 + c1) / mdc(mm, (a1 + c1))) + "/" + to_string(mm / mdc(mm, (a1 + c1)));

        } else if (o == '-') {
            int mm = mmc(b, d);
            int a1 = mm / b * a;
            int c1 = mm / d * c;

            r1 = to_string((a * d) - (c * b)) + "/" + to_string(b * d);
            r2 = to_string((a1 - c1) / mdc(mm, abs(a1 - c1))) + "/" + to_string(mm / mdc(mm, abs(a1 - c1)));

        } else if (o == '*') {
            int num = a * c;
            int den = b * d;

            r1 = to_string(a * c) + "/" + to_string(b * d);
            r2 = to_string((num) / mdc(num, den)) + "/" + to_string((den) / mdc(num, den));

        } else if (o == '/') {
            int num = a * d;
            int den = b * c;

            r1 = to_string(a * d) + "/" + to_string(b * c);
            r2 = to_string((num) / mdc(num, den)) + "/" + to_string((den) / mdc(num, den));
        }

        cout << r1 << " = " << r2 << endl;
    }

    return 0;
}