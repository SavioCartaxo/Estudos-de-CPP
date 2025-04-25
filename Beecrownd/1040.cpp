#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d, media;
    cin >> a >> b >> c >> d;
    
    media = (a*2 + b*3 + c*4 + d)/10;
    
    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7){
        cout << "Aluno aprovado." << endl;
    
    } else if (media < 5){
        cout << "Aluno reprovado." << endl;
    
    } else {
        cout << "Aluno em exame." << endl;
        
        double nota_do_exame;
        cin >> nota_do_exame;
        cout << "Nota do exame: " << nota_do_exame << endl;
        media = (media + nota_do_exame)/2;
        
        if (media >= 5){
            cout << "Aluno aprovado." << endl;
        } else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }

    return 0;
}