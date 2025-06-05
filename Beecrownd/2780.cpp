#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p;
    if (n <= 800)
        p = 1;
    else if (800 < n && n <= 1400)
        p = 2;
    else
        p = 3;
    
    cout << p << endl;

    return 0;
}