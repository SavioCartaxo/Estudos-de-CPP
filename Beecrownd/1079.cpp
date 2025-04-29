#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    float a, b, c;
    for (int i=0; i<n; i++){
        cin >> a >> b >> c;
        float s;
        s = (a*2 + b*3 + c*5)/10.0;

        cout << fixed << setprecision(1) << s << endl;
    }

    return 0;
}