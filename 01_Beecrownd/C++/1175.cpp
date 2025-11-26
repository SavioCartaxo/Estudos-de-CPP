#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[20];

    for (int i=0; i < 20; i++)
        cin >> n[i];
    
    int v = 19, d;
    for (int i= 0; i < 10; i++){
        d = n[v];
        n[v] = n[i];
        n[i] = d;
        v-=1;
    }

    for (int i=0; i < 20; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}