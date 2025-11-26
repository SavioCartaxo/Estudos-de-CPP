#include <iostream>
using namespace std;

int main(){
    int idade, idade_futura;     // Define variaveis
    cout << "Qual a sua idade?"; // cout = printa
    cin >> idade;                // cin = lê entrada pelo teclado
    idade_futura = idade - 1;    // operação aritmética
    cout << "A Sua Idade, no ano que vem, será " << idade_futura << endl; // endl == "\n" == pula linha

    return 0;
}