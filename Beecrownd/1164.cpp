#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++){
        bool t = false;
        cin >> a;

        int v = 1, s = 0;
        while (s < a){
            s += v;
            v += 1;

            if (s == a)
                t = true;

        }

        if (t and a != 1)
            cout << a << " eh perfeito" << endl;
        else
            cout << a << " nao eh perfeito" << endl;
    
    }

    return 0;
}