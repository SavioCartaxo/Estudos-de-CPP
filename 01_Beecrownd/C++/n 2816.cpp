#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, c;
    cin >> n >> c;

    string s;
    cin >> s;

    int inicio = 0, f = s.size() - 1;

    long long int saida = 1;
    for (int i = 0; i < c; i++) {
        cin >> inicio >> f;
        inicio--; f--;

        if (s[inicio] == '*' && s[f] != '*') {
            s[inicio] = s[f];

        } else if (s[f] == '*' && s[inicio] != '*') {
            s[f] = s[inicio];

        }

        if (s[inicio] != '*' && s[f] != '*' && s[f] != s[inicio]) {
            saida = 0;
            break;
        }
    }

    // tratado * q nao podem ser usados
    inicio = 0;
    f = n - 1;
    while (inicio <= f) {

        if (s[inicio] == '*' && s[f] != '*') {
            s[inicio] = s[f];

        } else if (s[f] == '*' && s[inicio] != '*') {
            s[f] = s[inicio];
        }

        if (s[inicio] != '*' && s[f] != '*' && s[f] != s[inicio]) {
            saida = 0;
            break;
        }

        inicio++; f--;
    }

    int contareptidos = 0;
    n = (int) ceil(double(n) / 2);
    for (int i = 0; i < n; i++){
        if (s[i] == '*'){
            contareptidos++;
        }
    }

    if (saida != 0 && contareptidos != 0) {
        c = pow(10, 9) + 7;
        saida = (saida * 26 * contareptidos) % c;
    }
    
    cout << saida << endl;

    return 0;
}