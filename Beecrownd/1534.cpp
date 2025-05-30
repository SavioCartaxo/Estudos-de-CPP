#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int c1 = 0, c2 = n-1;
        
        for (int j = 0; j < n; j++){
            int ca = 0;
            for(int i = 0; i < n; i++){
                if (ca == c2) cout << 2;
                else if (ca == c1) cout << 1;
                else cout << 3;
                ca++;
            }
            cout << endl;
            c1++; c2--;
        }

    }

    return 0;
}