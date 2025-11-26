#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, z;
    cin >> x;
    
    while (true){
    cin >> z;
    if (z > x)
        break;
    }

    int s = x;
    int c = 1;
    while (true){
        x++;
        s+= x;
        c++;
        if (s > z)
            break;
    }
    
    cout << c << endl;

    return 0;
}