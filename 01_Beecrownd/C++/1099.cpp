#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++){
        int a=0, b=0;
        cin >> a >> b;

        if (a > b){
            int sub = a;
            a = b;
            b = sub;
        }

        int soma = 0;
        for (int c= (a + 1); c < b; c++){
            if (c % 2 == 1) {
                soma += c;
            }
        }
        
        cout << soma << endl;
    }

    return 0;

}