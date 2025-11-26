#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    double maior, meio, menor;

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

    a = maior;
    b = meio;
    c = menor;

    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else if (a*a == b*b + c*c){
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (a*a > b*b + c*c){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (a*a < b*b + c*c){
        cout << "TRIANGULO ACUTANGULO" << endl;
    } 

    if (a == b && b == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if ((a == b) || (b == c) || (a == c)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}