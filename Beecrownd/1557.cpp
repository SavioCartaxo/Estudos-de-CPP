#include <bits/stdc++.h>
using namespace std;

int contador(int n){
    int c = 0;
    while (n > 0){
        n = n/10;
        c++;
    }
    return c;
}

int main(){
    int n;
    while (cin >> n && n != 0){

        int m[n][n];
        
        for (int i = 0; i < n; i++)
            for (int j = n - 1; j >= 0; j--)
                m[i][j] = (int) pow(2, (j + i));


        for (int i = 0; i < n; i++){
            for (int j =0 ; j < n; j++){
                cout << setw(contador(m[n-1][n-1])) << m[i][j];
                if (j != n-1) cout << ' ';
            }

            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}