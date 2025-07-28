#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int a, b;
    for (int i = 0; i < m; i++) {
        
        cin >> a >> b;

        int soma = 0;

        for (int i = a - 1; i < b; i++) {
            for (int j = a - 1; j < b; j++) {
                if (i != j)
                    soma += v[i] * 10 + v[j];
            }
        }

        cout << soma << endl;
    }

    return 0;
}