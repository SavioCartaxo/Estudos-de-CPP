#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a;
    char b;
    float c=0, s=0, r=0;
    for (int i=0; i<n; i++){
        cin >> a >> b;

        if (b == 'C')
            c += a;
        else if (b == 'R')
            r += a;
        else 
            s += a;
    }

    cout << "Total: " << s+c+r << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << c/(r+s+c)*100 << " %"<< endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << r/(r+s+c)*100 << " %"<< endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << s/(r+s+c)*100 << " %"<< endl;

    return 0;
}