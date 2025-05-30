#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n && n > 0){
        int m[n][n];

        int li = 0, ci = 0, cf = n-1, lf = n-1;
        for (int i0 = 1; i0 <= (n + 1) / 2; i0 ++){ // i0 = numero
            
            for (int i = ci; i <= cf; i++){
                m[li][i] = i0;
                m[lf][i] = i0;
            }

            for (int i = li; i <= lf; i++){
                m[i][ci] = i0;
                m[i][cf] = i0;
            }
            
            li++;
            lf--;
            ci++;
            cf--;
        }

        for (int i = 0; i < n; i ++){         
            for (int j = 0; j < n; j ++){
                cout << setw(3) << m[i][j];
                if (j < n - 1) cout << ' ';
            }

            cout << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}