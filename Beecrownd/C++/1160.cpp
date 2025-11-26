#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int pa, pb;
    double g1, g2;
    for (int i = 0; i < t; i++){
        cin >> pa >> pb;
        cin >> g1 >> g2;

        g1 = (g1 + 100) / 100.0;
        g2 = (g2 + 100) / 100.0;

        int a = 0;
        while (pa <= pb && a <= 100){
            pa *= g1; 
            pb *= g2;
            a++;
        }

        if (a <= 100)
            cout << a << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;
    }

    return 0;
}