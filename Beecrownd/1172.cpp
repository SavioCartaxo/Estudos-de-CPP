#include <bits/stdc++.h>
using namespace std;

int main(){
    int l[10];

    int x;
    for (int i=0; i < 10; i++){
        cin >> x;
        if (x <= 0)
            x = 1;
        l[i] = x;
    }

    for (int i=0; i < 10; i++)
        cout << "X[" << i << "] = " << l[i] << endl;

    return 0;
}