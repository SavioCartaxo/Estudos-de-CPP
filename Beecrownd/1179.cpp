#include <bits/stdc++.h>
using namespace std;

int main(){
    int im[5], p[5];

    int x, cp = 0, ci = 0;
    for (int i = 0; i < 15; i++){
        cin >> x;

        if (x % 2 == 0){
            p[cp] = x;
            cp += 1;

            if (cp == 5){
                for (int i = 0; i < 5; i++){
                    cout << "par[" << i << "] = " << p[i] << endl;
                    cp = 0;
                }
            }
        
        } else {
            im[ci] = x;
            ci += 1;

            if (ci == 5){
                for (int i = 0; i < 5; i++){
                    cout << "impar[" << i << "] = " << im[i] << endl;
                    ci = 0;
                }
            }
        }
    }

    for (int i= 0; i < ci; i++)
        cout << "impar[" << i << "] = " << im[i] << endl;
    
    for (int i= 0; i < cp; i++)
        cout << "par[" << i << "] = " << p[i] << endl;

    return 0;
}