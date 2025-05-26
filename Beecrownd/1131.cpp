#include <bits/stdc++.h>
using namespace std;

int main(){
    int r =1, a, b;
    int c = 0;
    int i=0, g=0, e=0;
    while (r != 2){
        cin >> a >> b;
        c++;
        if (a > b)
            i++;
        else if (b > a)
            g++;
        else
            e++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> r;
    }

    cout << c << " grenais" << endl;
    cout << "Inter:" << i << endl;
    cout << "Gremio:" << g << endl;
    cout << "Empates:" << e << endl;

    if (i > g)
        cout << "Inter venceu mais" << endl;
    else if (g > i)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;

    return 0;
}