#include <bits/stdc++.h>
using namespace std;

int main(){
    float m[12][12];
    int l;
    cin >> l;

    char t;
    cin >> t;

    for (int i= 0; i < 12; i++)
        for (int j= 0; j < 12; j++)
            cin >> m[i][j];
    
    float s=0;
    for (int i= 0; i < 12; i++)
        s+= m[i][l];


    if (t == 'S')
        cout << s << endl;
    else if (t == 'M')
        cout << fixed << setprecision(1) << s/12.0 << endl; 
    
    return 0;
}