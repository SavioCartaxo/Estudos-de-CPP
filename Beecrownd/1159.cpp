#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    while (true){
        cin >> x;

        if (x == 0)
            break;
        
        int c = 0, s = 0;
        while (c < 5){
            if (x % 2 == 0){
                s += x;
                c++;
            }
            x++;
        }

        cout << s << endl;

    }

    return 0;
}