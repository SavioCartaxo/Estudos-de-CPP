
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x > y){ // x é o menor
        int z = x;
        x = y;
        y = z;
    }
    
    for (int i = x + 1; i < y; i++){
        if (i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }

    return 0;
}