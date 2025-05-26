#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    int n = 1;
    for (int i=0; i<a; i++){
        for (int p=0; p<3; p++){
            cout << n << " ";
            n++;}
        cout << "PUM" << endl;
        n++;
        }

    return 0;
}