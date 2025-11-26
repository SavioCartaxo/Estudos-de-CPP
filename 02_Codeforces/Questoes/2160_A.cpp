#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int t, n, a;
    cin >> t;

    while (t-- > 0) {
        cin >> n;
        
        vector<bool> b(n+1, false);
        for(int i = 0; i < n; i++){
            cin >> a;
            b[a] = true;
        }

        a = n;
        for(int i = 0; i < n; i++){
            if (!b[i]) {
                a = i;
                break;
            }
        }

        cout << a << endl;
    }
    
    return 0;
}