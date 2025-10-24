#include <bits/stdc++.h>
using namespace std;

int main(){
    bitset<64> b;
    short a;
    for (int i = 0; i < 64; i++){
        cin >> a;
        if (a == 1)
            b.set(i);
    }

    unsigned long long n = b.to_ullong();

    cout << n << endl;
    return 0;
}