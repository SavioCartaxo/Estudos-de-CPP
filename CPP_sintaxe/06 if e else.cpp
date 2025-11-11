#include <bits/stdc++.h>
using namespace std;

int main(){
    double nota;
    cin >> nota;

    if (nota >= 7){
        cout << "Aprovado" << endl;
    } else if(nota >= 4){
        cout << "Final" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
    
    return 0;
}