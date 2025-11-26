#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n){

        int m = 0, s;
        for(int i = 0; i < n; i++){
            cin >> s;
            if (s > m) m = s;
        }            

        if (m < 10) cout << 1 << endl;
        else if (m >= 10 && m < 20) cout << 2 << endl;
        else cout << 3 << endl;

    }

    return 0;
}