#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, saida;
    cin >> a >> b;

    if (b > a){
        saida = b - a;
    } else {
        saida = 24 - a + b;
    }

    cout << "O JOGO DUROU " << saida << " HORA(S)" << endl;

    return 0;
}