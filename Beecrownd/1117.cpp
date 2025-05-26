#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int c = 0;
    double a, soma = 0;
    while (c < 2){
        cin >> a;
        if (a < 0 || a > 10)
            cout << "nota invalida" << endl;
        else {
            soma += a;
            c++;
        }
    }

    cout << fixed << setprecision(2) << "media = " << soma/2.0 << endl;

    return 0;
}