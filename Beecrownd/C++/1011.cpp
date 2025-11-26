#include <bits/stdc++.h>
using namespace std;

int main(){
    double r, res;
    cin >> r;
    res = (4.0/3.0) * 3.14159 * pow(r,3);
    
    cout << "VOLUME = " << fixed << setprecision(3) << res << endl;
    return 0;
}