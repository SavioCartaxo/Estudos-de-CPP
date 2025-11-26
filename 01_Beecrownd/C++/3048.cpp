#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a ,b;
    int s = 1;
    for (int i = 0; i < n; i++) {
        cin >> a;

        if (i != 0) {
            if (a != b) {
                s += 1;
            }
        }
        
        b = a;
    }

    cout << s << endl;
}
