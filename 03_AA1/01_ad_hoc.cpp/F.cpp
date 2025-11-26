#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, c = 0;
    string s;

    cin >> n >> q;

    char c1, c2 = 'P', c3 = 'P';
    for(int i = 0; i < n; i++){
        cin >> c1;
        
        if ( c1 == 'C' && c2 == 'B' && c3 == 'A')
            c++;
        
        s.push_back(c1);
        c3 = c2;
        c2 = c1;
    }

    int x;
    for(int i = 0; i < q; i++){
        cin >> x >> c1;
        x--;
        
        if (c1 != s[x]) {
            
            if (s[x] == 'A') {
                if (x <= n-3) {
                    if (s[x+1] == 'B' && s[x+2] == 'C')
                        c--;
                }
            }

            else if (s[x] == 'B') {
                if (x <= n-2 && x >= 1) {
                    if (s[x-1] == 'A' && s[x+1] == 'C')
                        c--;
                }
            }

            else if (s[x] == 'C') {
                if (x >= 2) {
                    if (s[x-2] == 'A' && s[x-1] == 'B')
                        c--;
                }
            }

            if (c1 == 'A') {
                if (x <= n-3) {
                    if (s[x+1] == 'B' && s[x+2] == 'C')
                        c++;
                }
            }

            else if (c1 == 'B') {
                if (x <= n-2 && x >= 1) {
                    if (s[x-1] == 'A' && s[x+1] == 'C')
                        c++;
                }
            }

            else if (c1 == 'C') {
                if (x >= 2) {
                    if (s[x-2] == 'A' && s[x-1] == 'B')
                        c++;
                }
            }

            s[x] = c1;
        }

        cout << c << endl;
    }

    return 0;
}