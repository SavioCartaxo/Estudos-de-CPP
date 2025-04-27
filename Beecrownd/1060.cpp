#include <bits/stdc++.h>
using namespace std;

int main(){
    double a;
    int contador=0;
    for (int i=1; i <=6; i++){
        cin >> a;
        if (a > 0)
            contador++;
    }

    cout << contador << " valores positivos" << endl;

    return 0;
}