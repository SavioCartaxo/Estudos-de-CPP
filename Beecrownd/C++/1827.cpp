#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n){

        int m[n][n];

        for (int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                if (i == (n/2) && i == j) m[i][j] = 4;
                else if (i >= n/3 && i < n - n/3 && j >= n/3 && j < n - n/3) m[i][j] = 1;
                else if (j == i) m[i][j] = 2;
                else if (i == n - 1 - j) m[i][j] = 3;
                else m[i][j] = 0;
            }
        
        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << m[i][j];
            cout << endl;
        }

        cout << endl;

    }

    return 0;
}