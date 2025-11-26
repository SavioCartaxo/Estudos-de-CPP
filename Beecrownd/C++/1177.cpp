#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int n[1000];

    int d = 0;
    for (int i= 0; i < 1000; i++){
        n[i] = d;
        d++;
        if (d >= x)
            d = 0;
        
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}