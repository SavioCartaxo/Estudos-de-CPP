#include <bits/stdc++.h>
using namespace std;

int main(){
    int hi, mi, hf, mf;
    int h, m;

    cin >> hi >> mi >> hf >> mf;

    // Minutos
    if (mf >= mi){
        m = mf - mi;
    } else{
        m = 60 - mi + mf;
        hi++;
    }

    if (hf >= hi){
        h = hf - hi;
    } else{
        h = 24 - hi + hf;
    }

    if (h == 0 && m == 0){
        h = 24;
    }

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}