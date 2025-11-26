#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maior = 0;
    int distancia;
    for (int comeco = 0; comeco < n; comeco++) {
        for (int final = 0; final < n; final++) {
            if (final != comeco) { 
                distancia = abs(comeco - final) + a[final] + a[comeco];

                if (distancia > maior) {
                    maior = distancia;
                }
            }
        }
    }

    cout << maior << endl;

    return 0;
}