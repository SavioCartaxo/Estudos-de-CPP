#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int p1=0, p2=1, p3;
    for (int i=1; i<=n; i++){
        cout << p1;
        p3 = p2 + p1;
        p1 = p2;
        p2 = p3;

        if (i != n)
            cout << ' ';
        else
            cout << endl;
    }

    return 0;
}