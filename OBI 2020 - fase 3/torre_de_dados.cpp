#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<map<int,int>> mapa(n);

    vi lista(6);
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> lista[j];
        }

        mapa[i][lista[0]] = lista[5];
        mapa[i][lista[1]] = lista[3];
        mapa[i][lista[2]] = lista[4];
        mapa[i][lista[3]] = lista[1];
        mapa[i][lista[4]] = lista[2];
        mapa[i][lista[5]] = lista[0];
    }

    int s = n * 4; // maior saida até agora
    int analise; // acumula a soma do "se"
    int a = 0; // to exluindo esse agora
    for (int i = 1; i <= 6; i++) {
        analise = n * 6;
        a = i;

        if (a == 6) analise -= 4; 
        else if (a == 5) analise -= 2;

        for(int j = 1; j < n; j++) {
            if (j != n - 1) { // j nao é a ultima linha
                if (mapa[j][a] == 6) {analise -= 4;}
                else if (mapa[j][a] == 5)  {analise -= 2;}
            } else { // J é a ultima linha
                if (mapa[j][a] == 6) {analise -= 2;}
                else if (mapa[j][a] == 5)  {analise -= 1;}
            }

            a = mapa[j][a];
        }
        
        s = max(s, analise);
    }

    cout << s << '\n';

    return 0;
}