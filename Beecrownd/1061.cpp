#include <bits/stdc++.h>
using namespace std;

int main(){
    string day, ponto;
    int di, hi, mi, si;
    int df, hf, mf, sf;
    int d, h, m, s;

    cin >> day >> di;
    cin >> hi >> ponto >> mi >> ponto >> si;

    cin >> day >> df;
    cin >> hf >> ponto >> mf >> ponto >> sf;

    if (sf >= si){
        s = sf - si;
    } else {
        s = 60 - si + sf;
        mi++;
    }
    
    if (mf >= mi){
        m = mf - mi;
    } else {
        m = 60 - mi + mf;
        hi++;
    }

    if (hf >= hi){
        h = hf - hi;
    } else {
        h = 24 - hi + hf;
        di++;
    }

    d = df - di;

    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;

    return 0;
}