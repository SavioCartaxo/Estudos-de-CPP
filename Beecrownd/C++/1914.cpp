#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);

        vector<string> palavras;
        stringstream ss(linha);
        string palavra;

        while (ss >> palavra) 
            palavras.push_back(palavra);

        int a, b;
        cin >> a >> b;
        cin.ignore();

        int paridade = (a + b) % 2;

        string vencedor;
        if (paridade == 0) {
            if (palavras[1] == "PAR") 
                vencedor = palavras[0];
            else
                vencedor = palavras[2];
        } else {
             if (palavras[1] == "PAR") 
                vencedor = palavras[2];
            else
                vencedor = palavras[0];
        }
        
        cout << vencedor << endl;

    }

    return 0;
}