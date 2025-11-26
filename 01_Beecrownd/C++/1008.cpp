#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    double c;
    cin >> a >> b >> c;  // lendo os dados de entrada
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << b * c << endl;
    return 0;
}