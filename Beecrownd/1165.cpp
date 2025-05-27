#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a;
    for (int i = 0; i < n; i++){
        cin >> a;

        bool t = true;

        if (a != 1){
            for (int i = 2; i < a; i++){
                if (a % i == 0){
                    t = false;
                    break;
                }
            }
        }
        
        if (t)
            cout << a << " eh primo" << endl;
        else
            cout << a << " nao eh primo" << endl;

    }

    return 0;
}