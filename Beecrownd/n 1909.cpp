#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if (a < b) swap(a,b);
    
    if (b == 0) return a;
    else return mdc(b, a%b);
}

int mmc(int a, int b){
    return a / mdc(a, b) * b;
}

int main(){
    int n, t;

    while(cin >> n >> t && (n != 0 || t != 0)){

        int d, m;
        for (int i = 0; i < n ; i++){
            cin >> d;
            if (i > 0) m = mmc(m, d);
            else m = d;
        }

        int di, r = -1;
        if (m <= t){
            for (int i = 1; i * i <= t; i++){
                if (t % i == 0){
                    di = t / i;
                    for (int d : {i, di}){
                        if (mmc(m, d) == t) {
                            if (r == -1 || d < r) {
                                r = d;
                            }
                        }
                    }
                }
            }
        }

        if (r != -1)
            cout << r << endl;
        else
            cout << "impossivel" << endl;

    }
    
    return 0;
}