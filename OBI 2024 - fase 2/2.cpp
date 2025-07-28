#include <bits/stdc++.h>
using namespace std;

vector<char> alf;
int n;

bool in(char t) {
    for (int i = 0; i < n; i++) {
        if (alf[i] == t) {
            return true;
        }
    }

    return false;
}

main () {
    int m;
    cin >> n >> m;

    alf.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> alf[i];
    }

    string saida = "S";

    char t;
    for (int i = 0; i < m; i++) {
        cin >> t;
        if (!(in(t))) {
            saida = "N";
            break;
        }
    }

    cout << saida << endl;

    return 0;
}