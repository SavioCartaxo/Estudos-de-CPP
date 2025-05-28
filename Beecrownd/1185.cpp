#include <bits/stdc++.h>
using namespace std;

int main(){
    float m[12][12];

    char t;
    cin >> t;

    for (int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> m[i][j];

    float s = 0;
    for (int i = 0; i <= 10; i++)
        for (int j = (-i) + 10; j >= 0; j-=1)
            s += m[i][j];

    if (t == 'S')
        cout << s << endl;
    else if (t == 'M')
        cout << fixed << setprecision(1) << s/66.0 << endl; 
    
    return 0;
}