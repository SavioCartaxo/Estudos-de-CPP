#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, soma=0;
    int contador=0;
    for (int i=1; i <=6; i++){
        cin >> a;
        if (a > 0){
            contador++;
            soma += a; 
        }
    }

    cout << contador << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma/contador << endl;
    
    return 0;
}