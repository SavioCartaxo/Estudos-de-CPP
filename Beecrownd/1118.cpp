#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x = 1;
    double a;
    
    while (x != 2) {
        int c = 0;
        double soma = 0;
        while (c < 2){
            cin >> a;
            if (a < 0 || a > 10)
                cout << "nota invalida" << endl;
            else {
                soma += a;
                c++;
            }
        }

        cout << fixed << setprecision(2) << "media = " << soma/2.0 << endl;
        
        while (true) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
            if (x == 1 || x == 2)
                break;
        }

        if (x == 2){
            break;
        }
    }
    
    return 0;
}