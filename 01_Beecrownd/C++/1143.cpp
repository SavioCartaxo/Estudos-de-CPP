#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    for (int i=1; i<=a; i++)
        cout << i << ' ' <<  i*i << ' ' << pow(i,3) << endl;

    return 0;
}