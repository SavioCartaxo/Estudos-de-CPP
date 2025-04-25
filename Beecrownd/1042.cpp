#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    int maior, meio, menor;

    cin >> a >> b >> c;

    if (a >= b && a >=c){
        maior = a;
    
    } else if (b >= a && b >=c){
        maior = b;
    
    } else {
        maior = c;
    }

    if (a <= b && a <=c){
        menor = a;
    
    } else if (b <= a && b <=c){
        menor = b;
    
    } else {
        menor = c;
    } 
    
    if ((menor == b || menor == c) && (maior == b || maior == c)){
        meio = a;
    
    } else if ((menor == b || menor == a) && (maior == b || maior == a)){
        meio = c;
    
    } else {
        meio = b;
    }

    cout << menor << endl << meio << endl << maior << endl << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}