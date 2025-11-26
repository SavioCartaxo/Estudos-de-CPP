#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    while (cin >> a && a != 0) {

        int b = pow(2, (2 * a - 2));
        int tamanho = to_string(b).size();
        
        int inicial = 1;

        for (int i = 0; i < a; i++) {
            int t = inicial;
            for (int j = 0; j < a; j++) {
                cout << setw(tamanho) << t;
                t *= 2;

                if (j != a - 1) {
                    cout << " ";
                }
            }

            cout << endl;
            inicial *= 2;
        }
    
        cout << endl;
    
    }

    return 0;
}
