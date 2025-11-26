#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if (a < b){ // a sempre será o maior
        int c = a;
        a = b;
        b = c;
    }

    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main(){
    int n;
    cin >> n;

    int a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cout << mdc(a, b) << endl;
    }
    
    return 0;
}