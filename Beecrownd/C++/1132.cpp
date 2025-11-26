#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x > y){ // x é o menor
        int z = x;
        x = y;
        y = z;
    }
    
    int soma = 0;
    for (int i=x; i<=y; i++)
        if (i%13!=0)
            soma += i;

    cout << soma << endl; 
    return 0;
}