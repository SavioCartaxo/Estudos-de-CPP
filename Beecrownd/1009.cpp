#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome;
    double salario, vendas;
    cin >> nome >> salario >> vendas;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << (salario + 0.15 * vendas) << endl;
    return 0;
}