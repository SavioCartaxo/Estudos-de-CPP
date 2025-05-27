#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x, y;
    for (int i= 1; i <= n; i++){
        cin >> x >> y;
        
        int s = 0, c = 0;
        while (true){
            if (x % 2 != 0){
                s += x;
                x += 2;
                c++;
            } else
                x += 1;
            
            if (c >= y)
                break;
        }

        cout << s << endl;

    }

    return 0;
}