#include <bits/stdc++.h>
using namespace std;

int main(){
    
    double n, c=0, i=0;
    while (true){
        cin >> n;

        if (n < 0)
            break;

        i += n;
        c++;
    }
    
    cout << fixed << setprecision(2) << i / c << endl;
        
    return 0;
}