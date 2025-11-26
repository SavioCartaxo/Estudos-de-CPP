#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2, d;
    cin >> x1 >> y1 >> x2 >> y2;
    d = pow(pow((x2 - x1),2) + pow((y2 - y1),2), (1/2.0));
    
    cout << fixed << setprecision(4) << d << endl;

    return 0;
}