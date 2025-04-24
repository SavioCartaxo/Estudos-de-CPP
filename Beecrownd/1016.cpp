#include <bits/stdc++.h>
using namespace std;

int main(){
    double a;
    cin >> a;
    if (a >= 0 && a <= 25) {
        cout << "Intervalo [0,25]" << endl;
    } else if ( 25 < a && a <= 50){
        cout << "Intervalo (25,50]" << endl;
    } else if (50 < a && a <= 75){
        cout << "Intervalo (50,75]" << endl;
    } else if (75 < a && a <= 100){
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }
    return 0;
}