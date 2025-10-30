#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int t, r, X, d, n;
    cin >> t;

    while (t-- > 0) {
        cin >> r >> X >> d >> n;
        cin.ignore();
        string linha;
        getline(cin,linha);
        
        int c = 0;
        for (char f : linha) {
            if (f == '1' || r < X) {
                c++;
                r-=d;
            }
            
            if (r < 0) r = 0;
        }    

        cout << c << endl;
    }

    return 0;
}