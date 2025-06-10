#include <bits/stdc++.h>
using namespace std;

int procura(vector<int> v, int e, int pi) {
    int h;
    for (int i = pi; i < (int)v.size(); i++) {
        if(v[i] == e) {
            h = i;
            break;
        }
    }
    return h;
}

int main() {
    int x;
    cin >> x;

    int n;
    for (int i = 0; i < x; i++) {

        cin >> n;
        vector<int> v(n);

        for (int j = 0; j < n; j++) 
            cin >> v[j];

        int c = 0;

        for (int j = 0; j < n; j++) {
            if (v[j] != j + 1) {
                int in = procura(v, j + 1, j);
                swap(v[in], v[j]);
                c++;
            }
        }

        cout << c << endl;
        
    }

    return 0;
}