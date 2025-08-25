#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

int main() {
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

    int s = 0; // maior saida até agora
    int analise; // acumula a soma do "se"
    int a; // levo em consideração que o primeiro dado começa com A para baixo
    for (int i = 0; i < 6; i++) {
        analise = 0; // começa considerando que é o max possivel
        a = i + 1; // A é o de baixo
        
        for (int j = 0; j < n; j++) { // nao checa o ultimo
            if (mapa[j][a] != 6 && a != 6) {
                analise += 6;
            } else if (mapa[j][a] != 5 && a != 5) {
                analise += 5;
            } else {
                analise += 4;
            }

            a = mapa[j][a];
        }

        s = max(s, analise);
    }

    cout << s << endl;

    return 0;
}