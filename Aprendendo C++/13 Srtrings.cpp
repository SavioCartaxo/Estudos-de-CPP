#include <bits/stdc++.h>
using namespace std;

int main(){
    // Para ler uma linha inteira e guardar como uma variavel
    string linha;
    getline(cin, linha);

    // percorrer cada caractere
    for (char c : linha) {
        cout << c << endl;
    }

    // convertendo para int
    char c = '7';
    int x = c - 0; // x == 7

    // diferente de python, strings são alteraveis em cpp
    linha[0] = 'A';

    // Split
    {
    string lin;
    getline(cin, lin);

    stringstream ss(lin); // cria um fluxo com a string
    string palavra;
    vector<string> palavras;

    while (ss >> palavra){
        palavras.push_back(palavra);
    }
    }

    // Passar de String para int
    int n = stoi("123");

    // Passar de int para String
    string s = to_string(42);

    // Substring
    s = "abcdefg";
    string sub = s.substr(1, 3); // pega "bcd" // a partir do indice 1 pega 3 caracteres

    // Verificar se um caractere é letra, dígito, etc.
    char c = 'A';
    if (isalpha(c)) cout << "Letra\n";
    if (isdigit(c)) cout << "Dígito\n";
    if (islower(c)) cout << "Minúscula\n";
    if (isupper(c)) cout << "Maiúscula\n";

    // reverter string
    reverse(s.begin(), s.end());

    //Remover caracteres especificos
    s.erase(remove(s.begin(), s.end(), "0x"));
    return 0;
}