#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    double c, soma;
    cin >> a >> b >> c;
    soma = b*c;
    cin >> a >> b >> c;
    soma += b*c;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << soma << endl;
    return 0;
}