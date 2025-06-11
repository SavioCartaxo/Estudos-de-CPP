#include <vector>
#include <iostream>

using namespace std;

int saida = 0;
vector<int> v;


void contaz(int inicio) {
    while (v[inicio + 1] == 0){
        saida++;
        inicio++;
    }
}


int main() {
    int n, k;
    cin >> n >> k;

    v.assign(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = i; j < n; j++) {
            soma += v[j];

            if (soma == k) {
                saida += 1;
                contaz(j);
                break;
                
            } else if (soma > k) {
                
                if (v[j] >= k){
                    i = j;
                    break;
                }

                break;
            }
        }
    }
    

    cout << saida << endl;

    return 0;
}