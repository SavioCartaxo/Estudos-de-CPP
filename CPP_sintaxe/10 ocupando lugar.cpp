#include <bits/stdc++.h>
using namespace std;

int main(){
    // quero que a saida ocupe quatro posições à direita

    int v[10] = {0};

    for (int i = 0; i < 10; i++)
        cout << setw(3) << v[i] << ' '; // setw(n) == ocupa n posições
    
    return 0;
}