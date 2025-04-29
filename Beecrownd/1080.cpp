#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, im;
    for (int i = 1; i <= 100; i++){
        cin >> n;

        if (i == 0){
            im = i;
            m = n;
        } else if (n > m){
            im = i;
            m = n;
        }
    }

    cout << m << endl << im << endl;

    return 0;
}