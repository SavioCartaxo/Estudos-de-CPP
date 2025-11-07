#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w; // linha e coluna // inteiro de 0 a 26 // letra maiuscula
    cin >> h >> w;

    string s = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int a;
    vector<vector<char>> v(h, vector<char>(w));
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++) {
            cin >> a;
            v[i][j] = s[a];
        }
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
