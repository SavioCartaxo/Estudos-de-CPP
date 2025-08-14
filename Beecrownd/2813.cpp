#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c = 0, t = 0;
    int cg = 0, tg = 0;
    for (int i = 0; i < n; i++) {
        string e, s;

        cin >> e >> s;
        
        if (e == "sol" && s == "sol") {
            continue;

        } else if (e == "chuva" && s == "chuva"){
            if(c == 0) {
                cg++;
                c++;
            }

        } else if (e == "sol" && s == "chuva") {
            if(t == 0) {
                tg++;
        
            } else {
                t--;
            }

            c++;

        } else if (e == "chuva" && s == "sol") {
            if (c == 0) {
                cg++;
            } else {
                c--;
            }
            t++;
        }

    }

    cout << abs(cg) << ' ' << abs(tg) << endl;;

    return 0;
}