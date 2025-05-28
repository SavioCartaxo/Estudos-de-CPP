#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];

    for (int i=0; i<n; i++)
        cin >> x[i];

    int m = x[0], pm = 0;
    for (int i=1; i<n; i++)
        if (x[i] < m){
            m = x[i];
            pm = i;
        }

    cout << "Menor valor: " << m << endl << "Posicao: " << pm << endl;

    return 0;
}