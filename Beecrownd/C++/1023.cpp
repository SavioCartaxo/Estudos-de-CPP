#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    map<int, int> m;
    map<int, int> invertido;
    int numero = 1;
    while (cin >> x && x != 0) {
        
        double s = 0;
        int cp = 0;
        int n, l;

        for (int i = 0; i < x; i++) {
            cin >> n >> l;
            s += l;
            cp += n;

            if (m.count(l/n)) {
                m[l/n] += n;
            } else {
                m[l/n] = n;
            }

        }

        for (auto i : m) {
            invertido[i.first] = invertido[i.second];
        }

        cout << "Cidade# " << numero << ":" << endl;

        for (auto e : invertido) {
            cout << e.first << '-' << e.second << ' ';
        }
        
        cout << endl << fixed << setprecision(2) << "Consumo medio: " << s/cp << " m3." << endl;

        m.clear();
        invertido.clear();
        numero++;
    }
}