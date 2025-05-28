#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}


int main(){
    
    while (true){
        int t, a, b;
        cin >> t >> a >> b;

        if (t == a && t == b && t == 0)
            break;

        int m = mmc(a, b);

        for (int i = 1; i <= t/2; i++)
            if (mmc(m, i) == t)
                cout << i << ' ';

        cout << t << endl;
    }
    return 0;
}