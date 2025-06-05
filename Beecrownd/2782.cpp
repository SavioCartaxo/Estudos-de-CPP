#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b;
    int da, dp;
    int c = 0;

    for (int i = 0; i < n; i++){

        if (i == 0)
            cin >> b;

        else {
            cin >> a;
            da = a - b;

            if (i == 1){
                dp = da;
            }

            if (da != dp)
                c++;
            
            dp = da;
            b = a;
        }
    }

    cout << c + 1 << endl;

    return 0;
}