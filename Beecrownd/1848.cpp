#include <bits/stdc++.h>
using namespace std;

int main() {
    int ccc = 0;
    int s = 0;
    while (ccc < 6) {
        char a,b,c;
        cin >> a >> b >> c;
        
        if (a == '*')
            s += 4;
        if (b == '*')
            s += 2;
        if (c == '*')
            s += 1;    
        if (a == 'c')
            ccc += 1;
        if (a == 'c' && ccc % 2 == 0) {
            cout << s << endl;
            s = 0;
        }
    }
}