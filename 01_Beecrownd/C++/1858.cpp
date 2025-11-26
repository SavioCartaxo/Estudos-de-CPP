#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, m, im;
    for (int i = 1; i <= n; i++){
        cin >> a;

        if (i == 1) {
            m = a;
            im = 1;
        }
        else {
            if(a < m){
                im = i;
                m = a;
            }
        }
    }

    cout << im << endl;
}