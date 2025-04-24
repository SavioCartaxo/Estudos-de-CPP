#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    double valor;

    cin >> a >> b;

    if (a == 1){
        valor = 4.0;
    } else if (a == 2){
        valor = 4.5;
    } else if (a == 3){
        valor = 5.0;
    } else if (a == 4){
        valor = 2.0;
    } else if (a == 5){
        valor = 1.5;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << valor*b << endl;

    return 0;
}