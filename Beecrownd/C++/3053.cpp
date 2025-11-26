#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char l;

    cin >> n >> l;

    int p[3] = {0,0,0};
    if(l == 'A'){
        p[0] = 1;
    } else if(l == 'B') {
        p[1] = 1;
    } else 
        p[2] = 1;

    int m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 1) {
            swap(p[0], p[1]);
        } else if (m == 2) {
            swap(p[1], p[2]);
        } else {
            swap(p[0], p[2]);
        }
    }

    if (p[0] == 1)
        cout << 'A' << endl;
    
    if (p[1] == 1)
        cout << 'B' << endl;
    
    if (p[2] == 1)
        cout << 'C' << endl;

    return 0;
}