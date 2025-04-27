#include <bits/stdc++.h>
using namespace std;

int main() {
    double salario, imposto = 0.0;
    cin >> salario;

    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (salario > 2000.00 && salario <= 3000.00) {
            imposto = (salario - 2000.00) * 0.08;
        } else if (salario > 3000.00 && salario <= 4500.00) {
            imposto = (1000.00 * 0.08) + (salario - 3000.00) * 0.18;
        } else {
            imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + (salario - 4500.00) * 0.28;
        }
        
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    }

    return 0;
}
