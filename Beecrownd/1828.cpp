#include <bits/stdc++.h>
using namespace std;

int main() {
    string l[5] = {"pedra", "papel", "tesoura", "Spock", "lagarto"};
    int ln[5][5] = {{0, -1, 1, -1, 1}, {1, 0, -1, 1, -1}, {-1, 1, 0, -1, 1}, {1, -1, 1, 0, -1}, {-1, 1, -1 ,1, 0}} ;

    int x;
    cin >> x;

    string a, b;
    int n1, n2;
    
    for(int i = 0; i < x; i++) {
        cin >> a >> b;
        for (int j = 0; j < 5; j++) {
            if (l[j] == a) n1 = j;
            if (l[j] == b) n2 = j;
        }

        cout << "Caso #" << i+1 << ": ";

        if (ln[n1][n2] == 0) cout << "De novo!" << endl;
        else if (ln[n1][n2] == 1) cout << "Bazinga!" << endl;
        else if (ln[n1][n2] == -1) cout << "Raj trapaceou!" << endl;

    }

    return 0;
}