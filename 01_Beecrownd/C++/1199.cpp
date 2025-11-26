#include <bits/stdc++.h>
using namespace std;

int main(){
    string x = "";
    while (x != "-1") {
        
        cin >> x;

        if (x.size() > 1 && x[1] == 'x') {
            x.erase(0, 2);
        
            int saida = 0;
            int m = 1;

            for (int i = x.length() - 1; i >= 0; i--) {
                if (isdigit(x[i])){
                    saida += m * (x[i] - '0');
                } else if (x[i] == 'A'){
                    saida += m * 10; 
                } else if (x[i] == 'B') {
                    saida += m * 11;
                } else if (x[i] == 'C') {
                    saida += m * 12;
                } else if (x[i] == 'D') {
                    saida += m * 13;
                } else if (x[i] == 'E') {
                    saida += m * 14;
                } else if (x[i] == 'F') {
                    saida += m * 15;
                }
                m *= 16;
            }

            cout << saida << endl;

        } else {
            string s = "";
            long long z = stoi(x);

            if (z == 0) {
                s = "0";
            }

            while (z > 0) {
                int resto = z % 16;
                z /= 16;

                // adiciona à resposta
                
                if (resto < 10){
                    char c = resto + '0';
                    s.insert(s.begin(), c);
                } else if (resto == 10){
                    s.insert(s.begin(), 'A'); 
                } else if (resto == 11){
                    s.insert(s.begin(), 'B'); 
                } else if (resto == 12){
                    s.insert(s.begin(), 'C'); 
                } else if (resto == 13){
                    s.insert(s.begin(), 'D'); 
                } else if (resto == 14){
                    s.insert(s.begin(), 'E'); 
                } else if (resto == 15){
                    s.insert(s.begin(), 'F'); 
                }

            }

            s.insert(s.begin(), 'x');
            s.insert(s.begin(), '0');

            cout << s << endl;
        }

    }

    return 0;
}