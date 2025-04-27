#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, contador=0;

    for (int i=0; i<=4; i++){
        cin >> a;
        if (a % 2 == 0){
            contador++;
        }
    }

    cout << contador << " valores pares" << endl;

    return 0;
}