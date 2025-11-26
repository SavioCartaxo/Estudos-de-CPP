#include <bits/stdc++.h>
using namespace std;

int main(){
    double s=0,d=1;
    for (double i=1; i <= 39; i+=2){
        s += i/d;
        d *= 2;
    }
        
    cout << fixed <<  setprecision(2) << s << endl;

    return 0;
}