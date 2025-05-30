#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    while (cin >> a >> b >> c){
        int t = (a * b) / (c/100.0);
         cout << (int) sqrt(t) << endl;
    }

    return 0;
}