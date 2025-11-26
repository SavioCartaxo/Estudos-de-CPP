#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    bool e_triangulo;
    cin >> a >> b >> c;

    if (a >= b+c || b >= a+c || c >= b+c){
        e_triangulo = false;
    } else{
        e_triangulo = true;
    }

    if (e_triangulo){
        cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
    } else{
        cout << "Area = " << fixed << setprecision(1) << (a+b) * c / 2.0 << endl;
    }

    return 0;
}