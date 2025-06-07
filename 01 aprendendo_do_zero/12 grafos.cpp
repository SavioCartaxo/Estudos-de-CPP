#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    vector<vector<int>> matriz(n);
    
    // Conexão das cidades A e B
    matriz[0].push_back(1); // Guarda q como vizinho de 0
    matriz[1].push_back(0);

    // Conexão das cidades B e C
    matriz[1].push_back(2);
    matriz[2].push_back(1);

    // Mostrando Vizinhos
    for (size_t i = 0; i < matriz.size(); i++) {
        cout << "Os vizinhos de " << i+1 << "Sao: ";

        for (int vizinho: matriz[i]) {
            cout << vizinho << ' ';
        }

        cout << endl;
    }

    return 0;
}