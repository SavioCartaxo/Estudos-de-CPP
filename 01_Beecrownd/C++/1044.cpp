#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    int maior, menor;

    cin >> a >> b;

    if (a > b){
        maior = a;
        menor = b;
    } else{
        menor = a;
        maior = b;
    }

    if (maior % menor == 0){
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}