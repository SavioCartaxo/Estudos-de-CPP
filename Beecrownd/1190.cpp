#include <bits/stdc++.h>
using namespace std;

int main(){
    double m[12][12];

    char t;
    cin >> t;

    for (int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> m[i][j];

    double s = 0;
    for (int i = 5; i >= 1; i--)
        for (int j = 12 - i; j < 12; j++)
            s += m[i][j];
    
    for (int i = 6; i <= 10; i++)
        for (int j = i + 1; j <= 11; j++)
            s += m[i][j];

    if (t == 'M')
        s = s/30.0;
    
    cout << fixed << setprecision(1) << s << endl;
    
    return 0;
}