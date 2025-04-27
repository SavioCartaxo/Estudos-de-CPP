#include <bits/stdc++.h>
using namespace std;

int main(){
    float salario, reajuste;

    cin >> salario;

    if (salario <= 400){
        reajuste = 1.15;
    } else if (salario > 400 && salario <= 800){
        reajuste = 1.12;
    } else if (salario > 800 && salario <= 1200){
        reajuste = 1.10;
    } else if (salario > 1200 && salario <= 2000){
        reajuste = 1.07;
    } else {
        reajuste = 1.04;
    }

    cout << fixed << setprecision(2) << "Novo salario: " << salario * reajuste << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << abs(salario - (salario * reajuste)) << endl;
    cout << fixed << setprecision(0) << "Em percentual: " << (reajuste - 1) * 100 << " %" << endl;
    return 0;
}