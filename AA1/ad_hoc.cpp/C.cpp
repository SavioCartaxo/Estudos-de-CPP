#include <bits/stdc++.h>
using namespace std;

bool primo(int a){
    if (a < 2) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0)
            return false;
    }
    return true;
}

int main(){
    int a;
    cin >> a;

    if (primo(a - 2)){
        cout << 2 << ' ' << a-2 << endl; 
    } else
        cout << -1 << endl;
    
    return 0;
}